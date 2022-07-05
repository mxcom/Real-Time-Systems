// active low
#define ON LOW
#define OFF HIGH

boolean mode = 0;
unsigned int sequence = 0;
unsigned int delay_ms = 0;
unsigned int delay_micros = 0;

void setup() {
  Serial.begin(9600);
  
  for (int i = 5; i <= 12; i++) {
    pinMode(i, OUTPUT);
    digitalWrite(i, OFF);
  }
  
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);

  attachInterrupt(digitalPinToInterrupt(2), runPressed, FALLING);
  attachInterrupt(digitalPinToInterrupt(3), confPressed, FALLING);

  updateSequenceLength();
  
  while (!Serial);
}

void loop() {
  if (mode == 0) {
    for (int i = 5; i <= 5+sequence-1; i++) {
      digitalWrite(i, ON);
      delay(2); //light on phase
      
      digitalWrite(i, OFF);
      delay(delay_ms);
      delayMicroseconds(delay_micros);
  
      if (mode != 0) return;
    }
  
    Serial.println(analogRead(A0));
  } else {
    while(true) {
      Serial.println(analogRead(A0));
      updateSequenceLength();
    
      unsigned const int LENGTH_END_PIN = 5+sequence-1;
      for (int i = 5; i <= 12; i++) {
        digitalWrite(i, i <= LENGTH_END_PIN ? ON : OFF);
      }
  
      if (mode != 1) {
        for (int i = 5; i <= 12; i++) {
          digitalWrite(i, OFF);
        }
        return;
      }
    }
  }
}

void stepDuration() {
  unsigned int led_duration_micros = 500000/sequence;
  if (led_duration_micros < 2000) {
    
  }

  unsigned int step_duration_micros = led_duration_micros - 2000;

  delay_ms = step_duration_micros / 1000;
  delay_micros = step_duration_micros % 1000;
}

void updateSequenceLength() {
  int sensorValue = analogRead(A0);
  sequence = (sensorValue/(1024/((12-5)+1)))+1;
  stepDuration();
}

void runPressed() {
  mode = 0;
}

void confPressed() {
  mode = 1;
}
