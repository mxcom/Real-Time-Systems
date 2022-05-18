void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Hello this is a reaction Test of your name");
  pinMode(1, INPUT_PULLUP);
  pinMode(2, INPUT_PULLUP);

}

void loop() {
  if(digitalRead(1) == LOW) {
    Serial.println("1: Pressed");
  } else {
    Serial.println("2: Pressed");
  }
}
