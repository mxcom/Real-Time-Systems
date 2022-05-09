void setup() {
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop() {
  digitalWrite(1, LOW);
  delay(200);
  digitalWrite(2, LOW);
  delay(200);
  digitalWrite(3, LOW);
  delay(200);
  digitalWrite(4, LOW);
  delay(200);
  digitalWrite(2, HIGH);
  delay(200);
  digitalWrite(4, HIGH);
  delay(200);
  digitalWrite(3, HIGH);
  delay(200);
  digitalWrite(1, HIGH);
  delay(200);
}
