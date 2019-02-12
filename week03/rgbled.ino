
const int rPin = 3;
const int gPin = 5;
const int bPin = 6;

int r, g, b, c;


void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  // generate our RGB values
  Wheel(c);

  // apply them
  analogWrite(rPin, r);
  analogWrite(gPin, g);
  analogWrite(bPin, b);

  // increment
  c++;
  // prevent rollover 255 
  c = c % 256;

  delay(20);

  // print values
  Serial.print(r);
  Serial.print("\t");
  Serial.print(g);
  Serial.print("\t");
  Serial.println(b);
}



// Input a value 0 to 255 to get a color value.
// The colours are a transition r - g - b - back to r.
void Wheel(byte WheelPos) {
  WheelPos = 255 - WheelPos;
  if (WheelPos < 85) {
    r = 255 - WheelPos * 3;
    g = 0;
    b = WheelPos * 3;
  } else if (WheelPos < 170) {
    WheelPos -= 85;
    r = 0;
    g = WheelPos * 3;
    b = 255 - WheelPos * 3;
  } else {
    WheelPos -= 170;
    r = WheelPos * 3;
    g = 255 - WheelPos * 3;
    b = 0;
  }
}
