/**
 * Test tool to read out the SRAM data via the bus tranceivers with an
 * Arduino Mega 2560
 *
 * 
 **/

//chip enable line
#define _CE 3


#define ROMSIZE 2048

void setup() {
  Serial.begin(115200);

  // we use direct port addressing to set the address bus and read
  // the data bus

  // setting PORTF to output (low byte of address bus)
  DDRF = 0xff;
  // setting PORTK to output (high byte of address bus)
  DDRK = 0xff;

  //set PORTL as input for the data bus
  DDRL = 0x00;

  // set the controll lines for chip enable
  digitalWrite(_CE,LOW);
  pinMode(_CE,OUTPUT);

  digitalWrite(_CE,HIGH);

  for(unsigned int i=0; i<ROMSIZE;i++) {
    if(i%16==0) {
      Serial.println();
      printByte((byte)(i >> 8),"0x");
      printByte((byte)(i & 0xff),"");
      Serial.print(": ");
    }

    PORTF = (byte)(i & 0xff);
    PORTK = (byte)(i >> 8);

    delay(1);

    byte data = PINL;
    printByte(data,"0x");
    Serial.print(" ");
  }    
  Serial.print(" ");
  Serial.println();
  Serial.println("done");

  while(1) {
  }

}

void printByte(byte x, char* prefix) {
  Serial.print(prefix);
  if(x < 16) Serial.print("0");
  Serial.print(x,HEX);
}


void loop() {
}


