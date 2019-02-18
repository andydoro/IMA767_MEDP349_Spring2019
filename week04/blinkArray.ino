int ledPin[6] = {3, 5, 6, 9, 10, 11};

const int delayTime = 50;

void setup() {
  // put your setup code here, to run once:

  //Serial.begin(115200);

  // set all to OUTPUT
  for (int i = 0; i < 6; i++) {
    pinMode(ledPin[i], OUTPUT);
  }

  // blink all!
  for (int j = 0; j < 2; j++) {
    for (int i = 0; i < 6; i++) {
      digitalWrite(ledPin[i], HIGH);
    }
    delay(200);
    for (int i = 0; i < 6; i++) {
      digitalWrite(ledPin[i], LOW);
    }
    delay(200);
  }

  delay(500);

}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < 6; i++) {

    digitalWrite(ledPin[i], HIGH);
    delay(delayTime);
    digitalWrite(ledPin[i], LOW);

  }

  for (int i = 5; i >= 0 ; i--) {
    digitalWrite(ledPin[i], HIGH);
    delay(delayTime);
    digitalWrite(ledPin[i], LOW);
  }
}
