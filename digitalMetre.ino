#include<LiquidCrystal.h>
LiquidCrystal lcd(8,9,4,5,6,7);
void setup() {
  // put your setup code here, to run once:
  pinMode(50,OUTPUT);
  pinMode(51,INPUT);
  lcd.begin(16,2);
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(3,0);
  lcd.print("~~BOYUNUZ~~");
  
  long sure,mesafe;
  digitalWrite(50,LOW);
  delayMicroseconds(2);
  digitalWrite(50,HIGH);
  delayMicroseconds(10);
  digitalWrite(50,LOW);

  sure = pulseIn(51,HIGH,11600);
  mesafe = sure*0.0345/2;

  lcd.setCursor(5,1);
  lcd.print(mesafe);
  lcd.print(" cm");
  delay(250);
  lcd.clear();
}
