#include <mega128.h>
#include <delay.h> 
#include <stdio.h>    


void main (void) {

#asm
ldi r20, 0xFF
out $11, r20
ldi r16, 0x0F
ldi r17, 0x10
add r16, r17
out $12, r16
in r18, $10
nop
#endasm

while (1){
delay_ms(500);
PORTD.7 = 1;
delay_ms(500);
PORTD.7 = 0;
}

}


