#define CLOCK 4
#define LATCH 3
#define DATA  5

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
 

 Serial.println("writing data");
 for (int i=0;i<=255;i++) {
    if(i<16) Serial.print("0");
    Serial.print(i,HEX); 
    Serial.print(" ");
    if(i%15==0) Serial.println();
    write2RAM(i,(byte)i);
 }
 
 Serial.println("reading data:");
 for (int i=0;i<=255;i++) {
    byte d = readRAM(i);
    if(d<16) Serial.print("0");
    Serial.print(d,HEX); 
    Serial.print(" ");
    if(i%15==0) Serial.println();
   
 }
/**
 for(int i=0;i<256;i++) {
 write2RAM(0,i);
 Serial.println(readRAM(0),HEX);
 }
 **/
 Serial.println("done");
 
 while(1) {};
}




void loop() {
  
}

void write2RAM(unsigned int address, byte data) {
  digitalWrite(OEDATA,LOW);
  digitalWrite(WR,HIGH);
  shiftout(address,data);
  digitalWrite(WR,LOW);
  //delay(5);
  digitalWrite(WR,HIGH);
 
}

byte readRAM(unsigned int address) {
  digitalWrite(OEDATA,LOW);
  digitalWrite(WR,HIGH);
  shiftout(address,0);
  digitalWrite(OEDATA,HIGH);
  delay(1);
 return ((digitalRead(13) << 7) +
      (digitalRead(12) << 6) +
      (digitalRead(11) << 5) +
      (digitalRead(10) << 4) +
      (digitalRead(9) << 3) +
      (digitalRead(8) << 2) +
      (digitalRead(7) << 1) +
       digitalRead(6));
}

void shiftout(unsigned int address, byte data) {
  
  byte lowbyte = address & 0xff;
  byte highbyte = address >> 8;
  
  digitalWrite(LATCH,LOW);
  shiftOut(DATA,CLOCK,MSBFIRST,highbyte);
  shiftOut(DATA,CLOCK,MSBFIRST,lowbyte);
  shiftOut(DATA,CLOCK,MSBFIRST,data);
  digitalWrite(LATCH,HIGH);
  delay(10);
  digitalWrite(LATCH,LOW);
}
