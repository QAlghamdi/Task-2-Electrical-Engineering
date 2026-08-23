void setup() {
  pinMode(2, OUTPUT); // IN1 - Right Motors
  pinMode(3, OUTPUT); // IN2 - Right Motors
  pinMode(4, OUTPUT); // IN3 - Left Motors
  pinMode(5, OUTPUT); // IN4 - Left Motors
}

void loop() {
  // 1. Forward - 30 seconds
  digitalWrite(2, HIGH); digitalWrite(3, LOW);
  digitalWrite(4, HIGH); digitalWrite(5, LOW);
  delay(30000);

  // 2. Reverse - 60 seconds
  digitalWrite(2, LOW);  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);  digitalWrite(5, HIGH);
  delay(60000);

  // 3. Alternating Turns - 60 seconds total (5s right / 5s left)
  for (int i = 0; i < 6; i++) {
    // Turn Right (5 seconds)
    digitalWrite(2, HIGH); digitalWrite(3, LOW);
    digitalWrite(4, LOW);  digitalWrite(5, HIGH);
    delay(5000);

    // Turn Left (5 seconds)
    digitalWrite(2, LOW);  digitalWrite(3, HIGH);
    digitalWrite(4, HIGH); digitalWrite(5, LOW);
    delay(5000);
  }
}
