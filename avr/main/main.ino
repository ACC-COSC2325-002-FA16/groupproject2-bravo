#include <avr/io.h>
#include <util/delay.h>
#include <math.h>
#include <LiquidCrystal.h>
#include "main.h"

#define CLOCK_PRESCALE(n)   (CLKPR = 0x80, CLKPR = (n))
float TEMP;


void adc_init()
{
    ADCSRA = 0;             // clear ADCSRA register
    ADCSRB = 0;             // clear ADCSRB register
    ADMUX |= (0 & 0x07);    // set A0 analog input pin
    ADMUX |= (1 << REFS0);  // set reference voltage
    //ADMUX |= (1 << ADLAR);  // left align ADC value to 8 bits from ADCH register
  
    // sampling rate is [ADC clock] / [prescaler] / [conversion clock cycles]
    // for Arduino Uno ADC clock is 16 MHz and a conversion takes 13 clock cycles
    //ADCSRA |= (1 << ADPS2) | (1 << ADPS0);    // 32 prescaler for 38.5 KHz
    //ADCSRA |= (1 << ADPS2);                     // 16 prescaler for 76.9 KHz
    //ADCSRA |= (1 << ADPS1) | (1 << ADPS0);    // 8 prescaler for 153.8 KHz
    ADCSRA = (1<<ADEN)|(1<<ADPS2)|(1<<ADPS1)|(1<<ADPS0);
  
    ADCSRA |= (1 << ADATE); // enable auto trigger
    ADCSRA |= (1 << ADIE);  // enable interrupts when measurement complete
    ADCSRA |= (1 << ADEN);  // enable ADC
    ADCSRA |= (1 << ADSC);  // start ADC measurements
}

ISR(ADC_vect)
{
  uint16_t x = ADC;  // read 8 bit value from ADC
}

int main(void) {
    uint32_t adc_value;
     
    DDRC = 0x00;
    adc_init();
    tempInit();
    
    CLOCK_PRESCALE(0);
    LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
    lcd.begin(16, 2);
    Serial.begin(9600);
    float voltage, degreesC, degreesF;

    while(1){
        adc_value = ADC; //Store ADC value
        voltage = ADC * 0.004882814;
        degreesC = (voltage - 0.5) * 100.0;
        degreesF = degreesC * (9.0/5.0) + 32.0;
        printLCD(lcd, degreesC, degreesF);
        Serial.print("Result: ");
        Serial.print(adc_value);
        _delay_ms(200);
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

