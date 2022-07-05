int value = 0;

void setup() {
  Serial.begin(2000000);
  
  pinMode(5, INPUT);
  pinMode(3, INPUT);
  
  while (!Serial);
}

void loop() {
  value = analogRead(A0);
  
  analogWrite(5, value/4);
  analogWrite(3, (1023-value)/4);
  
  Serial.println(digitalRead(5), DEC); 
}
