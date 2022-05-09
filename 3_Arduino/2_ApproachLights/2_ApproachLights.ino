void setup() {
  pinMode(1, INPUT);
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
  if(digitalRead(1) == HIGH) {
    digitalWrite(5,LOW);
    delay(2);            //msec
    digitalWrite(5, HIGH);
    //hier braucht es long ... 60.5 wird absgeschnitten -> evtl delayMicrosec
    //https://www.arduino.cc/reference/en/language/functions/time/delaymicroseconds/
    delay(100);   
    digitalWrite(6, LOW);
    delay(2);
    digitalWrite(6, HIGH);
    delay(100);
    digitalWrite(7, LOW);
    delay(2);
    digitalWrite(7, HIGH);
    delay(100);
    digitalWrite(8, LOW);
    delay(2);
    digitalWrite(8, HIGH);
    delay(100);
    digitalWrite(9, LOW);
    delay(2);
    digitalWrite(9, HIGH);
    delay(100);
    digitalWrite(10, LOW);
    delay(2);
    digitalWrite(10, HIGH);
    delay(100); 
    digitalWrite(11, LOW);
    delay(2);
    digitalWrite(11, HIGH);
    delay(100);
    digitalWrite(12, LOW);
    delay(2);
    digitalWrite(12, HIGH);
    delay(100);
  } else {
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
  }
  
}
