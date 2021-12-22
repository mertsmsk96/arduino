#include<LiquidCrystal.h>
LiquidCrystal lcd(8,9,4,5,6,7);
byte parmak[8] = {
    B00100,
    B00100,
    B00100,
    B10101,
    B11111,
    B11111,
    B11111,
    B11111,
  };
void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  lcd.createChar(0,parmak);
}

void loop() {
  
int i;
lcd.setCursor(0,0);
lcd.print("AL O SVVEEEEDDI"); // İstediğinizi yazabilirsiniz. Tabi 16 karakter den küçük olmalı...
for(i=0; i<17; i++)
{
lcd.setCursor(i,1);
lcd.print("GOTUNE SOK ");// İstediğinizi yazabilirsiniz. Tabi 16 karakter den küçük olmalı...
lcd.write(byte(0));
delay(500);
lcd.setCursor(i,1);
lcd.print(" ");
}
}
