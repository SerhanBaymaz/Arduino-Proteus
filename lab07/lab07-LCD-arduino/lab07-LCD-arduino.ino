#include <LiquidCrystal.h>

const int rs =12, en=11, d4 =5, d5=4, d6=3, d7=2;
  LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

unsigned long myTime;

const int trigPin =9;
const int echoPin = 10;

long duration;
int distance;
int distanceCm, distanceInch;


void setup() {
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);

}

void loop() {

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distanceCm = duration * 0.034 / 2;
  distanceInch = duration * 0.0133 / 2;

  lcd.setCursor(0, 0); // Sets the location at which subsequent text written to the LCD will be displayed
  lcd.print("Distance: "); // Prints string "Distance" on the LCD
  lcd.print(distanceCm); // Prints the distance value from the sensor
  lcd.print(" cm");
  delay(500);
  lcd.setCursor(0, 1);
  lcd.print("Distance: ");
  lcd.print(distanceInch);
  lcd.print(" inch");
  delay(500);

}
