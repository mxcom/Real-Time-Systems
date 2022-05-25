// LOW = Not Pressed
// HIGH = Pressed
const int button1 = 1;
const int button2 = 2;

int buttonState = 0;
int lastButtonState = 0;

void setup() {
  pinMode(button1, INPUT);
  // pinMode(2, INPUT_PULLUP);
  Serial.begin(9600);
  Serial.println("Hello this is a reaction Test of your name");
}

void loop() {
  buttonState = digitalRead(button1);

  // compare the buttonState to its previous state
  if (buttonState != lastButtonState) {
    // if the state has changed, increment the counter
    if (buttonState == HIGH) {
      Serial.println("pressed");
    } else {
      // if the current state is LOW then the button went from on to off:
      Serial.println("not pressed");
    }
  }
  // save the current state as the last state, for next time through the loop
  lastButtonState = buttonState;
}
