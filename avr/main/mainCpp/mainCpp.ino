// include the library code:
#include <LiquidCrystal.h>
#include <math.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const int temperaturePin = 0;
float voltage, degreesC, degreesF;

float getVoltage (int pin) {
  return (analogRead(pin) * 0.004882814);
}

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.setCursor(0, 1);
  lcd.print("Temperature");
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):

  voltage = getVoltage(temperaturePin);
  degreesC = (voltage - 0.5) * 100.0;
  degreesF = degreesC * (9.0/5.0) + 32.0;

  if (degreesC > 26) {
    lcd.setCursor(0, 1);
    lcd.print("goodbye world   ");
  }
  else {
    lcd.setCursor(0, 1);
    lcd.print("Comfortable temp");
  }

  lcd.setCursor(0, 0);
  lcd.print("F: ");
  lcd.setCursor(3, 0);
  lcd.print(round(degreesF));
  lcd.setCursor(8, 0);
  lcd.print("C: ");
  lcd.setCursor(11, 0);
  lcd.print(round(degreesC));


  delay(250);
  
  // print the number of seconds since reset:

  //-lcd.setCursor(0, 1);
  //lcd.print(millis() / 1);
  
}
