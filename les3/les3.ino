#include <ArduinoJson.h>

const int ldrPin = A0;
const int ledPin1 = 5;
const int ledPin2 = 6;
const int ledPin3 = 3;

void setup() {
  Serial.begin(115200);

  delay(1000);
  Serial.println("System Start...");
  
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
}

void loop() {

  int ldr_value = analogRead(ldrPin);

  StaticJsonDocument<64> doc;
  doc["sensor"] = ldr_value;
  serializeJson(doc, Serial);
  Serial.println();

  if (ldr_value < 500){
    int speed = random(100, 501);
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
    delay(speed);

    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
    delay(speed);
    
  }else{
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
    delay(500);
  }
  
  
  
}
