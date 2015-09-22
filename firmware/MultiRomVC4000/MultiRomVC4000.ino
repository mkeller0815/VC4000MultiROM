#include <SD.h>
#include <SPI.h>            // Needed for SD lib

// Defines for Arduino port numbers
#define CLOCK          5  // SRCLK (A/D-Bus Shift Registers)
#define LATCH          3  // RCLK  (A/D-Bus Shift Registers)
#define DATA           6  // SER   (A/D-Bus Shift Registers)
#define OESHIFT        2  // _G    (A/D-Bus Shift Registers)
#define WESRAM        10
#define OEVCBUS        7  // OE for Bus Transceivers
#define SD_CS          4  // Chip Select for SD card
#define LED           13

#define DISP_OE A2        // 7-segment display
#define DISP_LATCH A3     // 7-segment display
#define DISP_CLK A4       // 7-segment display
#define DISP_DATA A5      // 7-segment display


// Miscellaneous other defines
#define NOKEY           0
#define UPKEY           1
#define DOWNKEY         2
#define SELECTKEY       3
#define MAX_ROMS       99
#define MAX_ROM_SIZE 6144

// Global variables
byte lastkey = NOKEY;
byte romNumber = 1;
char romName[] = { 0, 0, 0, 0, 0, 0, 0 };
File romFile;
unsigned blinkTimeHigh = 500;
unsigned blinkTimeLow  = 500;

byte digitOne[10]= {0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x6d, 0x7d, 0x07, 0x7f, 0x6f};

void setup() {
  pinMode(SD_CS, OUTPUT);
  pinMode(CLOCK, OUTPUT);
  pinMode(LATCH, OUTPUT);
  pinMode(DATA, OUTPUT);
  pinMode(WESRAM, OUTPUT);
  pinMode(OESHIFT, OUTPUT);
  pinMode(OEVCBUS, OUTPUT);
  pinMode(LED, OUTPUT);

  pinMode(DISP_LATCH, OUTPUT);
  pinMode(DISP_CLK, OUTPUT);
  pinMode(DISP_DATA, OUTPUT);
  pinMode(DISP_OE, OUTPUT);
  digitalWrite(DISP_OE,LOW);

  // Isolate MultiROM from console bus
  disableVCBus();

  // Init and enable 7-segment display
  dispShowNumber(romNumber);
  
  // Wait for user selecting a ROM number
  byte key = getKey(A7);
  do {
    if (key == UPKEY && lastkey != UPKEY && romNumber < MAX_ROMS)
      ++romNumber;
    else if (key == DOWNKEY && lastkey != DOWNKEY && romNumber > 1)
      --romNumber;
    dispShowNumber(romNumber);
    lastkey = key;
    key = getKey(A7);
  } while (key != SELECTKEY);

  // Construct ROM file name
  if (romNumber < 10) {
    romName[0] = '0';
    itoa(romNumber, romName+1, 10);
  } else {
    itoa(romNumber, romName, 10);
  }
  strcpy(romName+2, ".bin");

  // Initialize SD card and open ROM file
  if (SD.begin(SD_CS)) {
    romFile = SD.open(romName);

    // Write ROM file to SRAM
    if (romFile) {
      unsigned romSize = static_cast<unsigned>(romFile.size());
      if (romSize <= MAX_ROM_SIZE) {
        for (unsigned i = 0; i < romSize; i++) {
          write2RAM(i, romFile.read());
        }
      } else {
        // ROM size too big.
        blinkTimeHigh =   50;
        blinkTimeLow  = 1000;
      }
      romFile.close();
      enableVCBus();
    } else {
      // ROM file could not be opened.
      blinkTimeHigh =  50;
      blinkTimeLow  = 200;
    }
  } else {
    // SD card not found or otherwise failing initialization
    blinkTimeHigh = 50;
    blinkTimeLow  = 50;
  }
  SPI.end();  // Otherwise on-board LED does not work!
}

void loop() {
  // Status indication
  digitalWrite(LED, HIGH);
  delay(blinkTimeHigh);
  digitalWrite(LED, LOW);
  delay(blinkTimeLow);
}

void disableVCBus() {
  digitalWrite(WESRAM, HIGH);
  digitalWrite(OESHIFT, LOW);
  digitalWrite(OEVCBUS, HIGH);
}

void enableVCBus() {
  digitalWrite(WESRAM, HIGH);
  digitalWrite(OESHIFT, HIGH);
  digitalWrite(OEVCBUS, LOW);
  delay(100);
  // handover R/W control to VC4000
  digitalWrite(WESRAM, LOW);
}

void write2RAM(unsigned int address, byte data) {
  digitalWrite(OESHIFT, LOW);
  digitalWrite(WESRAM, HIGH);
  shiftout(address, data);
  digitalWrite(WESRAM, LOW);
  digitalWrite(WESRAM, HIGH);
}

void shiftout(unsigned int address, byte data) {
  byte lowbyte = address & 0xff;
  byte highbyte = address >> 8;

  digitalWrite(LATCH, LOW);
  shiftOut(DATA, CLOCK, MSBFIRST, data);
  shiftOut(DATA, CLOCK, MSBFIRST, highbyte);
  shiftOut(DATA, CLOCK, MSBFIRST, lowbyte);
  digitalWrite(LATCH, HIGH);
  digitalWrite(LATCH, LOW);
}

byte getKey(int pin) {
  int v = analogRead(pin);
  delay(50);
  v = analogRead(pin);
  if (v < 600 && v > 300)
    return DOWNKEY;
  if (v < 300 && v > 100)
    return SELECTKEY;
  if (v < 100)
    return UPKEY;
  return NOKEY;
}

void dispShowNumber(byte num) {
  byte i = num % 10;
  byte j = (num - i) / 10;
      digitalWrite(DISP_LATCH, LOW);
      shiftOut(DISP_DATA, DISP_CLK, MSBFIRST, digitOne[i]); // digitTwo
      shiftOut(DISP_DATA, DISP_CLK, MSBFIRST, digitOne[j]); // digitOne
      digitalWrite(DISP_LATCH, HIGH);
  
}
