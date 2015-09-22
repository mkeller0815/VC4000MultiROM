#define OE A2
#define LATCH A3
#define CLK A4
#define DATA A5


//This is the hex value of each number stored in an array by index num
byte digitOne[10]= {0x3F, 0x06, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff};

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
      shiftOut(DATA, CLK, LSBFIRST, ~digitOne[i]); // digitTwo
      shiftOut(DATA, CLK, LSBFIRST, ~digitOne[j]); // digitOne
      digitalWrite(LATCH, HIGH);
      delay(500);
    }
  }
}
