#include "config.inc"

        .section .text
        .global     main
        .extern     tempInit, readTemp
        .org        0x0000

main:   
        ldi     r28, (RAMEND & 0x00ff)
        ldi     r29, (RAMEND >> 8)
        out     _SPH, r29
        out     _SPL, r28
        
        call    init
        call    tempInit
        
1:      call    readTemp
        rjmp    1b

init:   eor     r1, r1
        out     _SREG, r1
        ldi     r24, 0x80
        sts     CLKPR, r24
        sts     CLKPR, r1
