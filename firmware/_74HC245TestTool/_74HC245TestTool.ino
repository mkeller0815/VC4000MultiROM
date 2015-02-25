
#define CHIP1_DIR 2
#define CHIP2_DIR 3

#define CHIP1_OE 4
#define CHIP2_OE 5


void setup() {
  //PORT F (A0 - A7) als Ausgang verwenden
  DDRK = 0xff;
  
  //PORT K (A8 - A15) als Eingang verwenden
  DDRF = 0x00;
  
  Serial.begin(9600);
  
pinMode(CHIP1_DIR,OUTPUT);
pinMode(CHIP2_DIR,OUTPUT);

pinMode(CHIP1_OE,OUTPUT);
pinMode(CHIP2_OE,OUTPUT);
}


void loop() {
  Serial.println("start");
  
  digitalWrite(CHIP1_DIR,HIGH);
  digitalWrite(CHIP2_DIR,LOW);
  
  digitalWrite(CHIP1_OE,LOW);
  digitalWrite(CHIP2_OE,LOW);
  
  for(int i=0; i<256;i++) {
    Serial.print("write : 0x");
    printByte(i);
    writeByte(i);
    Serial.print("    ");  
    Serial.print("read : 0x");
    printByte(readByte());
    Serial.println();
  }
  
  while(1) {};
}


void printByte(byte x) {
 if(x < 16 ) Serial.print("0");
 Serial.print(x,HEX);
}

void writeByte(byte x) {
 PORTK = x; 
}

byte readByte() {
 return PINF; 
}
