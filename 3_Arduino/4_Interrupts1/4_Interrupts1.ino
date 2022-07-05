volatile bool state = LOW;

// https://riptutorial.com/arduino/example/9856/interrupt-on-button-press
void switchState(){
  state = !state;
}

void setup() {
  
  pinMode(2,INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(2), switchState, FALLING);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);

}

void loop() {
  
  if(state == LOW) {
    
    digitalWrite(12,HIGH);

    digitalWrite(5,LOW);
    delay(2);
    digitalWrite(5,HIGH);
    delay(60.5);
    delayMicroseconds(500);
  
    digitalWrite(6,LOW);
    delay(2);
    digitalWrite(6,HIGH);
    delay(60);
    delayMicroseconds(500);
  
    digitalWrite(7,LOW);
    delay(2);
    digitalWrite(7,HIGH);
    delay(60);
    delayMicroseconds(500);
        
    digitalWrite(8,LOW);
    delay(2);
    digitalWrite(8,HIGH);
    delay(60);
    delayMicroseconds(500);
    
    digitalWrite(9,LOW);
    delay(2);
    digitalWrite(9,HIGH);
    delay(60);
    delayMicroseconds(500);

    digitalWrite(10,LOW);
    delay(2);
    digitalWrite(10,HIGH);
    delay(60);
    delayMicroseconds(500);

    digitalWrite(11,LOW);
    delay(2);
    digitalWrite(11,HIGH);
    delay(60);
    delayMicroseconds(500);
  
    digitalWrite(12,LOW);
    delay(2);
    digitalWrite(12,HIGH);
    delay(60);
    delayMicroseconds(500);
    
  } else {
    
    digitalWrite(5, LOW);
    digitalWrite(12,LOW);
    
  }
  
}
