void setup() {
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() {
  digitalWrite(5,LOW);
  delay(2);            //msec
  digitalWrite(5, HIGH);
  // (1000 ms - (8 lights * 2 ms * 2 repetitions)) / 16
  delay(60);
  delayMicroseconds(5);
  digitalWrite(6, LOW);
  delay(60);
  delayMicroseconds(5);
  digitalWrite(6, HIGH);
  delay(60);
  delayMicroseconds(5);
  digitalWrite(7, LOW);
  delay(60);
  delayMicroseconds(5);
  digitalWrite(7, HIGH);
  delay(60);
  delayMicroseconds(5);
  digitalWrite(8, LOW);
  delay(2);
  digitalWrite(8, HIGH);
  delay(60);
  delayMicroseconds(5);
  delayMicroseconds(5);
  digitalWrite(9, LOW);
  delay(2);
  digitalWrite(9, HIGH);
  delay(60);
  digitalWrite(10, LOW);
  delay(2);
  digitalWrite(10, HIGH);
  delay(60); 
  delayMicroseconds(5);
  digitalWrite(11, LOW);
  delay(2);
  digitalWrite(11, HIGH);
  delay(60);
  delayMicroseconds(5);
  digitalWrite(12, LOW);
  delay(2);
  digitalWrite(12, HIGH);
  delay(60);
  delayMicroseconds(5);
  
}
