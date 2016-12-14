#include <avr/io.h>

        .section        .text
        .global         readTemp

readTemp:
	;in          r24, PORTC           ; get current bits
    ldi         r24, 5;

    ret
