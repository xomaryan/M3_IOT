void setup() {
  Serial.begin(115200);

  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);

  randomSeed(analogRead(0));
  
}

void loop() {
  Serial.println("Hallo!");

  int A = random(999);
  int B = random(999);
  int C = random(999);
  int D = random(999);

  Serial.print("A:");Serial.print(A);
  Serial.print("B:");Serial.print(B);
  Serial.print("C:");Serial.print(C);
  Serial.print("D:");Serial.print(D);

  if (A > B || A < C){
    digitalWrite(3, HIGH);
  }else{
    digitalWrite(3, LOW);
  }

  if (C > A && A < B){
    digitalWrite(5, HIGH);
  }else{
    digitalWrite(5, LOW);
  }

  if (B > C && B > A && C < A){
    digitalWrite(6, HIGH);
  }else{
    digitalWrite(6, LOW);
  }

  if (D > A && D > C && D > B){
    for (int i=0; i<10; i++){
      digitalWrite(3, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);

      delay(100);
      digitalWrite(3, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);

      delay(100);
    }
  }
}
