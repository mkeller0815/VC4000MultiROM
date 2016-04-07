#define OE A2
#define LATCH A3
#define CLK A4
#define DATA A5


//This is the hex value of each number stored in an array by index num
byte digitOne[10]= {0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x6d, 0x7d, 0x07, 0x7f, 0x6f};

int i;

void setup(){
 
  pinMode(LATCH, OUTPUT);
  pinMode(CLK, OUTPUT);
  pinMode(DATA, OUTPUT);
  pinMode(OE, OUTPUT);
  digitalWrite(OE,LOW);
}

void loop(){
 
  for(int i=0; i<100; i++){
    showNumber(i);    
    delay(100);
  }
}


void showNumber(byte num) {
  byte i = num % 10;
  byte j = (num - i) / 10;
      digitalWrite(LATCH, LOW);
      shiftOut(DATA, CLK, MSBFIRST, digitOne[i]); // digitTwo
      shiftOut(DATA, CLK, MSBFIRST, digitOne[j]); // digitOne
      digitalWrite(LATCH, HIGH);
  
}
