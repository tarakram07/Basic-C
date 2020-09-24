// Program to blink LED using AVR Microcontroller (ATmega16)
#include<avr/io.h>
#include<util/delay.h>
int main(void)
{
DDRB=0b11111111;
DDRD=0b11111111;
while(1)
{
void i()
{
int i;
for(i=1;i<=45;i++)
{

PORTB=0b11111111;
PORTD=0b11111011;
_delay_ms-(50);
;
PORTB=0b11000111;
PORTD=0b11110001;
_delay_ms-(50);
}
}
}
}
 
