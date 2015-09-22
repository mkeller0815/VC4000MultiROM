#define OE A2
#define LATCH A3
#define CLK A4
#define DATA A5


//This is the hex value of each number stored in an array by index num
byte digitOne[10]= {0x6F, 0x09, 0x73, 0x3B, 0x1D, 0x3E, 0x7C, 0x0B, 0x7F, 0x1F};
byte digitTwo[10]= {0x7B, 0x11, 0x67, 0x37, 0x1D, 0x3E, 0x7C, 0x13, 0x7F, 0x1F};

int i;

void setup(){
 
  pinMode(LATCH, OUTPUT);
  pinMode(CLK, OUTPUT);
  pinMode(DATA, OUTPUT);
  pinMode(OE, OUTPUT);
  digitalWrite(OE,LOW);
}

void loop(){
 
  for(int i=0; i<10; i++){
    for(int j=0; j<10; j++){
      digitalWrite(LATCH, LOW);
      shiftOut(DATA, CLK, MSBFIRST, ~digitTwo[i]); // digitTwo
      shiftOut(DATA, CLK, MSBFIRST, ~digitOne[j]); // digitOne
      digitalWrite(LATCH, HIGH);
      delay(500);
    }
  }
}
