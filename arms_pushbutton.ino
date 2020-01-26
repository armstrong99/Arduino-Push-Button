const int buttonPin = 2;
const int ledPin = 13;

int buttonState = 0;

void setup() {
  // initialize the led pin as
  pinMode(ledPin, OUTPUT);

  // initialise the buttonPin as input

  pinMode(buttonPin, INPUT);
  

}

void loop() {
  // read the state of the pushButton value

  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH)   return  digitalWrite(ledPin, HIGH);
   
  else return  digitalWrite(ledPin, LOW);
  

}