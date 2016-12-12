#include <avr/io.h>

#define CPU_PRESCALE(n) (CLKPR = 0x80, CLKPR = (n))

unsigned char delay;
unsigned char sonar_pulse(unsigned char);

int main(void) {

    CPU_PRESCALE(0);

    delay = 0;
    while(1) {
        delay = sonar_pulse(delay);
    }
}

unsigned char sonar_pulse(unsigned char data) {
    return data + 7;
}
