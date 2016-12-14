#include <avr/io.h>

        .section        .text
        .global         tempInit

tempInit:
    ldi         r27, 0x00
    out         DDRC, r27

    ret
