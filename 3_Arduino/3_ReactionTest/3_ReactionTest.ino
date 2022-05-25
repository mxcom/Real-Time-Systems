// LOW  = button not pressed
// HIGH = button pressed

const int button1 = 2;
const int button2 = 4;
const int led = 13;
unsigned long time1;
unsigned long time2;
unsigned long diff;
float diffSec;

int buttonState = 0;
int lastButtonState = 0;

void setup() {
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
  Serial.println("Hello this is a reaction Test of your name");
}

void loop() {
  while(digitalRead(button1) == LOW) { /* wait */ }

  time1 = micros();
  Serial.print("time 1: ");
  Serial.print(time1);
  Serial.println(" ms");

  while(digitalRead(button2) == LOW) { /* wait */ }

  time2 = micros();
  Serial.print("time 2: ");
  Serial.print(time2);
  Serial.println(" ms");
  
  diff = (time2 - time1);
  
  Serial.print("time difference: ");
  Serial.print(diff);
  Serial.println(" ms");
  
  diffSec = (float)(diff / 1e6);
  
  Serial.print("time difference: ");
  Serial.print(diffSec, 6);
  Serial.println(" s");
  
}
