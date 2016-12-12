#include <avr/io.h>
#include <util/delay.h>
#include <math.h>
#include <avr/lcd.h>

#define CLOCK_PRESCALE(n)   (CLKPR = 0x80, CLKPR = (n))

extern float readTemp;
float TEMP;

int main(void) {    
    CLOCK_PRESCALE(0);
    //DDRC = B00000;
    Serial.begin(9600);
    float voltage, degreesC, degreesF;
    while(1){
        voltage = TEMP * 0.004882814;
        degreesC = (voltage - 0.5) * 100.0;
        degreesF = degreesC * (9.0/5.0) + 32.0;
        Serial.println(voltage);
        _delay_ms(50);
    }
}
