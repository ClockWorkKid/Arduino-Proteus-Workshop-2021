// include the library code:
#include <LiquidCrystal.h>

const int rs = 4, en = 2, d4 = A0, d5 = A1, d6 = A2, d7 = A3;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  lcd.begin(16, 2);
  lcd.print("hello, world!");
  pinMode(A4, INPUT);
}

void loop() {
  int a = analogRead(A4);
  float volt = 5* (float)a / 1023.0 * 2;
  lcd.setCursor(0, 1);
  lcd.print(volt);
  delay(100);
}
