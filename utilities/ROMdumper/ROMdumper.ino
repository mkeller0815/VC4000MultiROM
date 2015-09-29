/**
 * ROM dump utility.  Use an Arduino Mega to dump game cartridges
 * directly to an SD card.
 **/
#include <SD.h>
#include <SPI.h>
#include <TM1637Display.h>

#define _CE                  2
#define BUT_UP               5
#define BUT_DN               6
#define BUT_OK               7
#define DISP_CLK            13
#define DISP_DIO            12

#define NOKEY                0
#define UPKEY                1
#define DNKEY                2
#define OKKEY                3
#define BYTES_PER_FLUSH    512
#define TWOK             0x800
#define FOURK           0x1000
#define SIXK            0x1600  // = 5.5K, because of PVI mirror

TM1637Display disp(DISP_CLK, DISP_DIO);
File file;
uint8_t lastkey = NOKEY;
uint8_t gameType = 2;
unsigned romSize = 0;
uint8_t fileNumber = 0;
unsigned long bytesWritten = 0;
uint8_t dispInitData[] = {0, 0, 0, 0};
char fileName[] = { 0, 0, 0, 0, 0, 0, 0 };

void setup() {
  // setting PORTF to output (low byte of address bus)
  DDRF = 0xff;
  // setting PORTK to output (high byte of address bus)
  DDRK = 0xff;

  //set PORTL as input for the data bus
  DDRL = 0x00;

  pinMode(_CE,OUTPUT);
  pinMode(BUT_UP, INPUT_PULLUP);
  pinMode(BUT_DN, INPUT_PULLUP);
  pinMode(BUT_OK, INPUT_PULLUP);

  // Init display
  disp.setSegments(dispInitData);
  disp.setBrightness(0x0f);

  // Loop, if SD card not available
  if (!SD.begin()) {
    disp.showNumberDec(9999, false, 4, 4);
    for (;;);
  }
}

void loop() {
  setRomSize();
  setFileName();
  dumpRom();
}

byte getKey() {
  if (!digitalRead(BUT_UP))
    return UPKEY;
  else if (!digitalRead(BUT_DN))
    return DNKEY;
  else if (!digitalRead(BUT_OK)) 
    return OKKEY;
  else
    return NOKEY;
}

void setRomSize() {
  byte key = getKey();
  do {
    if (key == UPKEY && lastkey != UPKEY && gameType != 6) {
      gameType += 2;
    } else if (key == DNKEY && lastkey != DNKEY && gameType != 2) {
      gameType -= 2;
    }
    disp.showNumberDec(gameType, false, 2, 2);
    lastkey = key;
    key = getKey();
  } while (key != OKKEY);

  if (gameType == 2)
    romSize = TWOK;
  else if (gameType == 4)
    romSize = FOURK;
  else if (gameType == 6)
    romSize = SIXK;
}

void setFileName() {
  delay(1000);   // Wait for user stop pressing OK
  ++fileNumber;  // Eases dumping of multiple games
  disp.showNumberDec(fileNumber, true, 2, 2);
  byte key = getKey();
  do {
    if (key == UPKEY && lastkey != UPKEY) {
      if (fileNumber < 99)
        ++fileNumber;
      else {
        fileNumber = 1;
      }
    }
    else if (key == DNKEY && lastkey != DNKEY) {
      if (fileNumber > 1)
        --fileNumber;
      else
        fileNumber = 99;
    }
    disp.showNumberDec(fileNumber, true, 2, 2);
    lastkey = key;
    key = getKey();
  } while (key != OKKEY);

  // Construct ROM file name
  if (fileNumber < 10) {
    fileName[0] = '0';
    itoa(fileNumber, fileName+1, 10);
  } else {
    itoa(fileNumber, fileName, 10);
  }
  strcpy(fileName+2, ".BIN");  // Append filename extension
}

void dumpRom() {
  if (openFile()) {
    digitalWrite(_CE,HIGH);

    for (unsigned i = 0; i < romSize; ++i) {
      // Assert address:
      PORTF = (byte)(i & 0xff);
      PORTK = (byte)(i >> 8);
      delay(1);          // Ensure that data is ready. 
      byte data = PINL;  // Read data
      writeToFile(data);
    }
    writeToFile(0x0a);
    file.close();
  }
  delay(1000);
}

bool openFile() {
  // Remove file, if it already exists (i.e. overwrite it)
  if (SD.exists(fileName))
    if (!SD.remove(fileName))
      return false;
  file = SD.open(fileName, FILE_WRITE);
  if (file)
    return true;
  else
    return false;
}

void writeToFile(uint8_t dataByte) {
  file.write(dataByte);
  bytesWritten++;
  if (bytesWritten == BYTES_PER_FLUSH)
    file.flush();
}
