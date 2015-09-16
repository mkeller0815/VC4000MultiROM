
#define NOKEY     0
#define UPKEY     1
#define DOWNKEY   2
#define SELECTKEY 3

byte lastkey = NOKEY;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  switch(getKey(A7)) {
    case UPKEY:
        if(lastkey != UPKEY) {
           Serial.println("UP Key pressed");
           lastkey = UPKEY;
        }
        break;
    case DOWNKEY:
        if(lastkey != DOWNKEY) {
           Serial.println("DOWN Key pressed");
           lastkey = DOWNKEY;
         }
        break;
    case SELECTKEY:
        if(lastkey != SELECTKEY) {
           Serial.println("SELECT Key pressed");
           lastkey = SELECTKEY;
        }
        break;

    default:
        lastkey = NOKEY;
        break; 
  }
}

byte getKey(int pin) {
  int v = analogRead(pin);
  delay(50);
  v = analogRead(pin);
  if(v < 600 && v > 300) return DOWNKEY;
  if(v < 300 && v > 100) return SELECTKEY;
  if(v < 100) return UPKEY;
  return NOKEY;
  
}

