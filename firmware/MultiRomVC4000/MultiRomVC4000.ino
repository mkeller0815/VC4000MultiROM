#include <SD.h>
#include <SPI.h>

#define CLOCK          5     // SRCLK
#define LATCH          3     // RCLK
#define DATA           6     // SER

#define WESRAM         10
#define OESHIFT        2     // _G Shift Registers

#define OEVCBUS        7

#define SD_CS          4
#define FILENAME_SIZE  12    // 8.3 convention, see SD library doc.
#define MAX_ROM_SIZE   6144

#define LED            13

unsigned blinkTimeHigh = 500;
unsigned blinkTimeLow = 500;

char romName[FILENAME_SIZE + 1];
File romFile;

void setup() {
  pinMode(SD_CS, OUTPUT);
  pinMode(CLOCK, OUTPUT);
  pinMode(LATCH, OUTPUT);
  pinMode(DATA, OUTPUT);
  pinMode(WESRAM, OUTPUT);
  pinMode(OESHIFT, OUTPUT);
  pinMode(OEVCBUS, OUTPUT);
  pinMode(LED, OUTPUT);

  disableVCBus();

  // Initializing SD card and open ROM file
  if (SD.begin(SD_CS)) {
    if (getRomName()) {
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
    //enableSRAM();
    unsigned romSize = static_cast<unsigned>(romFile.size());
    if (romSize <= MAX_ROM_SIZE) {
      for (unsigned i = 0; i < romSize; i++) {
        write2RAM(i, romFile.read());
      }
    } else {
      // ROM size too big.
      blinkTimeHigh = 50;
      blinkTimeLow = 1000;
    }
    romFile.close();
    enableVCBus();
  } else {
    // ROM file could not be opened.
    blinkTimeHigh = 50;
    blinkTimeLow = 200;
  }

  SPI.end();  // Disable SPI bus to regain control over the pins.
}

void loop() {
  // Status indication
  digitalWrite(LED, HIGH);
  delay(blinkTimeHigh);
  digitalWrite(LED, LOW);
  delay(blinkTimeLow);
}

/*void enableSRAM() {
  pinMode(CE1SRAM, OUTPUT);
  pinMode(CE2SRAM, OUTPUT);
  digitalWrite(CE1SRAM, LOW);
  digitalWrite(CE2SRAM, HIGH);
}*/

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
