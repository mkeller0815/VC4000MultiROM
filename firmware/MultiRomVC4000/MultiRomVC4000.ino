#include <SD.h>
#include <SPI.h>

#define CLOCK          4     // SRCLK
#define LATCH          3     // RCLK
#define DATA           5     // SER

#define WR             2
#define OEDATA         A1    // _G DATA BUS
#define OEADDRESS      A0    // _G ADDRESS BUS

#define OEVCBUS        6

#define CE1SRAM        7
#define CE2SRAM        8

#define SD_CS          10
#define FILENAME_SIZE  12    // 8.3 convention, see SD library doc.
#define MAX_ROM_SIZE   6144

#define LED            13

unsigned blinkTimeHigh = 500;
unsigned blinkTimeLow = 500;

char romName[FILENAME_SIZE + 1];
File romFile;

void setup() {
  pinMode(CLOCK, OUTPUT);
  pinMode(LATCH, OUTPUT);
  pinMode(DATA, OUTPUT);
  pinMode(WR, OUTPUT);
  pinMode(OEDATA, OUTPUT);
  pinMode(OEADDRESS, OUTPUT);
  pinMode(OEVCBUS, OUTPUT);
  pinMode(LED, OUTPUT);

  disableVCBus();

  //Serial.begin(9600);

  // Initializing SD card and open ROM file
  if (SD.begin(SD_CS)) {
    if (getRomName()) {
      Serial.println(romName);
      romFile = SD.open(romName);
    } else {
      // ROM name could not be determined.
      blinkTimeHigh = 50;
      blinkTimeLow = 500;
    }
  } else {
    // SD card not found or otherwise failing SD initialization.
    blinkTimeHigh = 50;
    blinkTimeLow  = 50;
  }

  // Write ROM file to SRAM
  if (romFile) {
    enableSRAM();
    unsigned romSize = static_cast<unsigned>(romFile.size());
    if (romSize <= MAX_ROM_SIZE) {
      for (unsigned i = 0; i < romSize; i++) {
        //byte romByte = romFile.read();
        //Serial.println(romByte);
        //write2RAM(i, romByte);
        write2RAM(i, romFile.read());
      }
    } else {
      // ROM size too big.
      blinkTimeHigh = 50;
      blinkTimeLow = 1000;
    }
    romFile.close();

    disableSRAM();
    enableVCBus();
  } else {
    // ROM file could not be opened.
    blinkTimeHigh = 50;
    blinkTimeLow = 200;
  }

  SPI.end();  // Disable SPI bus to regain control over the pins.
}

void loop() {
  digitalWrite(LED, HIGH);
  delay(blinkTimeHigh);
  digitalWrite(LED, LOW);
  delay(blinkTimeLow);
}

void enableSRAM() {
  pinMode(CE1SRAM, OUTPUT);
  pinMode(CE2SRAM, OUTPUT);
  digitalWrite(CE1SRAM, LOW);
  digitalWrite(CE2SRAM, HIGH);
}

void disableSRAM() {
  // Ensure that CE1+2 are in LOW state before turning them OFF.
  // Switching them to INPUT mode while in HIGH state will
  // activate the internal pullup resistors to VCC (which is a
  // bad idea!).
  digitalWrite(CE1SRAM, LOW);
  digitalWrite(CE2SRAM, LOW);
  pinMode(CE1SRAM, INPUT);
  pinMode(CE2SRAM, INPUT);
}

void disableVCBus() {
  digitalWrite(WR, HIGH);
  digitalWrite(OEDATA, LOW);
  digitalWrite(OEADDRESS, LOW);
  digitalWrite(OEVCBUS, HIGH);
}

void enableVCBus() {
  digitalWrite(WR, HIGH);
  digitalWrite(OEDATA, HIGH);
  digitalWrite(OEADDRESS, HIGH);
  digitalWrite(OEVCBUS, LOW);
  delay(100);
  //handover R/W control to VC4000
  digitalWrite(WR, LOW);
}

void write2RAM(unsigned int address, byte data) {
  digitalWrite(OEDATA, LOW);
  digitalWrite(OEADDRESS, LOW);
  digitalWrite(WR, HIGH);
  shiftout(address, data);
  digitalWrite(WR, LOW);
  digitalWrite(WR, HIGH);
}

void shiftout(unsigned int address, byte data) {
  byte lowbyte = address & 0xff;
  byte highbyte = address >> 8;

  digitalWrite(LATCH, LOW);
  shiftOut(DATA, CLOCK, MSBFIRST, data);
  shiftOut(DATA, CLOCK, MSBFIRST, highbyte);
  shiftOut(DATA, CLOCK, MSBFIRST, lowbyte);
  digitalWrite(LATCH, HIGH);
  delay(1);
  digitalWrite(LATCH, LOW);
}

bool getRomName() {
  File config = SD.open("config.txt");
  if (config) {
    for (byte i = 0; config.peek() != '\n' && i <= FILENAME_SIZE; ++i) {
      romName[i] = config.read();
    }
    config.close();
    return true;
  } else {
    // File config.txt was not found or could not be opened.
    return false;
  }
}
