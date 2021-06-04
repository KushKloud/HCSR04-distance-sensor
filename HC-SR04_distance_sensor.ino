const int trigger_pin = 12;
const int echo_pin = 11;
const int gled = 4;
const int yled = 3;
const int rled = 2;

int time_left;
int distance;

void setup() {
  pinMode(rled, OUTPUT);
  pinMode(yled, OUTPUT);
  pinMode(gled, OUTPUT);
  pinMode(trigger_pin, OUTPUT);
  pinMode(echo_pin, INPUT);


}

void loop() {
  digitalWrite(trigger_pin, HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigger_pin, LOW);
  time_left = pulseIn(echo_pin, HIGH);
  distance = (time_left/2) / 28.5;


  if (distance <= 10){
    digitalWrite (rled, HIGH);
    delay(250);
    digitalWrite (rled, LOW);
  }
     
  else if (distance <= 25){
    digitalWrite (yled, HIGH);
    delay(500);
    digitalWrite (yled, LOW);
  }
   else if (distance <= 50){
    digitalWrite (gled, HIGH);
    delay(750);
    digitalWrite (gled, LOW);
  }
  }
  
  
