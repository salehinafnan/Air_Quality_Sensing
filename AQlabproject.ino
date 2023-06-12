#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int Gas = A0;
int th=250;
void setup()
{
  pinMode(A0 , INPUT);
  lcd.begin(16, 2);

}

void loop()
{
  int ppm=analogRead(A0);

 
  lcd.print("Gas: ");
  lcd.print(ppm);
  lcd.print(" ppm");


  if (ppm > th)           
    {
      lcd.setCursor(0,1);        
      lcd.print("Bad Air Quality");
   
    }
  else
    {
      lcd.setCursor(0,1);
      lcd.print ("Good Air Quality");

    }  
  delay (400);
  lcd.clear();
}
