/**
 * proof of concept for writing data to an SRAM with 
 * 3 74HC595 shift registers and reading data out 
 * via different Arduino Pins.
**/


//
// pins used for the shiftout
//
#define CLOCK 4
#define LATCH 3
#define DATA  5

//
// pins used for write pulse of the SRAM 
// and the output enable of the data-bus shift register
//
#define WR    2
#define OEDATA 14


void setup() {
 pinMode(CLOCK,OUTPUT); 
 pinMode(LATCH,OUTPUT); 
 pinMode(DATA,OUTPUT); 
 pinMode(WR,OUTPUT);
 pinMode(OEDATA,OUTPUT);
 
 pinMode(13,INPUT); 
 pinMode(12,INPUT); 
 pinMode(11,INPUT); 
 pinMode(10,INPUT); 
 pinMode(9,INPUT); 
 pinMode(8,INPUT); 
 pinMode(7,INPUT); 
 pinMode(6,INPUT); 

 Serial.begin(9600);
 delay(100);
 
 // first write 256 bytes to the first 256 addresses

 Serial.println("writing data");
 for (int i=0;i<=255;i++) {
    if(i<16) Serial.print("0");
    Serial.print(i,HEX); 
    Serial.print(" ");
    if(i%15==0) Serial.println();
    write2RAM(i,(byte)i);
 }
 
 // read back all 256 bytes
 Serial.println("reading data:");
 for (int i=0;i<=255;i++) {
    byte d = readRAM(i);
    if(d<16) Serial.print("0");
    Serial.print(d,HEX); 
    Serial.print(" ");
    if(i%15==0) Serial.println();
   
 }

 Serial.println("done");

 //just stop here 
 while(1) {};
}


void loop() {
  
}

/**
 * write one byte to a specific address of the SRAM
 * @param address - unsigned integer with address 0x0000 - 0xffff 
 * @param data    - byte that should be written
 **/
void write2RAM(unsigned int address, byte data) {
  //take care that the shift register output is enabled (low active)
  digitalWrite(OEDATA,LOW);

  //set SRAM to READ mode
  digitalWrite(WR,HIGH);

  //set address and data to the address- and data-bus of the SRAM
  shiftout(address,data);

  //generate write pulse
  digitalWrite(WR,LOW);
  digitalWrite(WR,HIGH);
 
}

/**
 * read one byte from a specific address
 * @param address - unsigned integer with address 0x0000 - 0xffff
 * @return byte   - data read from SRAM
 **/
byte readRAM(unsigned int address) {
  //take care that the shift register output is enabled (low active)
  digitalWrite(OEDATA,LOW);

  //set SRAM to READ mode
  digitalWrite(WR,HIGH);

  //set address-bus, data-bus is not needed but 8 bits need to b shifted out
  shiftout(address,0);

  //disable output of shiftregister for data-bus, so the SARM can drive the databus
  digitalWrite(OEDATA,HIGH);
  
  delay(1);

  //read all 8 data bits and return the complete byte
  return ((digitalRead(13) << 7) +
      (digitalRead(12) << 6) +
      (digitalRead(11) << 5) +
      (digitalRead(10) << 4) +
      (digitalRead(9) << 3) +
      (digitalRead(8) << 2) +
      (digitalRead(7) << 1) +
       digitalRead(6));
}

/**
 * wrapper function to shift out a 16 bit address and 8 bit data
 * @param address - unsigned integer with address 0x0000 - 0xffff
 * @param data    - one byte for data-bus
 **/
void shiftout(unsigned int address, byte data) {
  
  //split address to high- and low-byte
  byte lowbyte = address & 0xff;
  byte highbyte = address >> 8;
  
  //shift out all 3 bytes in the right order
  digitalWrite(LATCH,LOW);
  shiftOut(DATA,CLOCK,MSBFIRST,highbyte);
  shiftOut(DATA,CLOCK,MSBFIRST,lowbyte);
  shiftOut(DATA,CLOCK,MSBFIRST,data);
  //latch out the data
  digitalWrite(LATCH,HIGH);
  delay(10);
  digitalWrite(LATCH,LOW);
}
