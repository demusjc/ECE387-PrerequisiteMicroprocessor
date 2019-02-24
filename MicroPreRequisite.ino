void setup() {
  pinMode(8, OUTPUT);
}

void loop() {
  for (int i = 0; i < 3; i++) {
    digitalWrite(8, HIGH);
    delay(200);
    digitalWrite(8, LOW);
    delay(200);
  }
  delay(400);
  for (int i = 0; i < 3; i++) {
    digitalWrite(8, HIGH);
    delay(400);
    digitalWrite(8, LOW);
    delay(400);
  }
  delay(400);
  for (int i = 0; i < 3; i++) {
    digitalWrite(8, HIGH);
    delay(200);
    digitalWrite(8, LOW);
    delay(200);
  }
  delay(800);
}
