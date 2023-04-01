#include<LiquidCrystal.h>
int contrast=100;
 
LiquidCrystal lcd(12,11,5,4,3,2);
void setup()
{
 analogWrite(6,contrast);
 lcd.begin(16,2);
}

void loop()
{
 //lcd.setCursor(5,0);  
 //lcd.print("ICE2018A");
 lcd.setCursor(3,0);
 lcd.print("Hello world");// EDIT THE TEXT TO DISPLAYs
}
