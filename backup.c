#include <avr/io.h>

#define CPU_PRESCALE(n) (CLKPR = 0x80, CLKPR = (n))

float TEMP;
extern float readTemp();

int main(void) {

    CPU_PRESCALE(0);

    TEMP = 0;
    while(1) {
        TEMP = 7;
    }
}
