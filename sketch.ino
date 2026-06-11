#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

const int potPin = 34;
const int ledPin = 18;

void setup() {
  pinMode(ledPin, OUTPUT);

  lcd.init();
  lcd.backlight();

  Serial.begin(115200);
}

void loop() {

  int sensor = analogRead(potPin);

  int current = map(sensor, 0, 4095, 0, 10);
  int power = current * 230;

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("I:");
  lcd.print(current);
  lcd.print("A");

  lcd.setCursor(8, 0);
  lcd.print("P:");
  lcd.print(power);

  lcd.setCursor(0, 1);
  lcd.print("V:230");

  if (power > 1500) {
    digitalWrite(ledPin, HIGH);
    lcd.setCursor(8, 1);
    lcd.print("HIGH");
  } else {
    digitalWrite(ledPin, LOW);
    lcd.setCursor(8, 1);
    lcd.print("SAFE");
  }

  Serial.print("Current: ");
  Serial.print(current);
  Serial.print(" A  Power: ");
  Serial.print(power);
  Serial.println(" W");

  delay(1000);
}
