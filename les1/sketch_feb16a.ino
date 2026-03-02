int ledPin = D3;
void setup() {
  pinMode (ledPin, OUTPUT);

}



void loop() {
  for (int brightness = 0; brightness <= 1023; brightness++){
    analogWrite(ledPin, brightness);
    delay(2);
  }

  for (int brightness = 1023; brightness >= 0; brightness--){
    analogWrite(ledPin, brightness);
    delay(2);
  }
}
