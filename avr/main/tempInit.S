#include <avr/io.h>

        .section        .text
        .global         tempInit
        .extern         ADCSRA, ADCSRB

tempInit:
    ldi         r27, 0x00
    out         DDRC, r27   

    ldi         r16, 0x00
    ;out         ADCSRA, r16      ; Arduino IDE is not recognizing ADC registers as registers
    ldi         r16, 0x00
    ;out         ADCSRB, r16
    
    ret
