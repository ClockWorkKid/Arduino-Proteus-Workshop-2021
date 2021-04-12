
void setup() {
  Serial.begin(9600);
}

void loop() {
  int a = analogRead(A4);
  float volt = 5* (float)a / 1023.0 * 2;
  Serial.print(volt);
  Serial.println(" volt");
  delay(100);
}
