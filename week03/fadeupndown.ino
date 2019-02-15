

const int ledPin = 9;

int fadeValue = 0;

int fadeIncrement = 1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  analogWrite(ledPin, fadeValue);

  fadeValue = fadeValue + fadeIncrement;

  if (fadeValue == 0 || fadeValue == 255) {
    delay(500);
    fadeIncrement = fadeIncrement * -1;
  }

  Serial.println(fadeValue);

  delay(50);
  //fadeValue = fadeValue % 255;

}
