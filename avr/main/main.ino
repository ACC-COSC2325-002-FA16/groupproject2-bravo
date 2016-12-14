#include <avr/io.h>
#include <util/delay.h>
#include <math.h>
#include <LiquidCrystal.h>
#include "main.h"

#define CLOCK_PRESCALE(n)   (CLKPR = 0x80, CLKPR = (n))
float TEMP;

int main(void) {    
    CLOCK_PRESCALE(0);
    LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
    lcd.begin(16, 2);
    Serial.begin(9600);
    float voltage, degreesC, degreesF;
    tempInit();
    while(1){
        readTemp();
        voltage = TEMP * 0.004882814;
        degreesC = (voltage - 0.5) * 100.0;
        degreesF = degreesC * (9.0/5.0) + 32.0;
        printLCD(lcd, degreesC, degreesF);
        Serial.println(voltage);
        _delay_ms(50);
    }
}

void printLCD(LiquidCrystal lcd, float C, float F) {
        lcd.setCursor(0, 0);
        lcd.print("F: ");
        lcd.setCursor(3, 0);
        lcd.print(F);
        lcd.setCursor(0, 1);
        lcd.print("C: ");
        lcd.setCursor(3, 1);
        lcd.print(C);
}

