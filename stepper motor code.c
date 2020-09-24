#define F_CPU 1000000UL
#include<avr/io.h>
#include<util/delay.h>
  
  
  
  int main()
  {

  int a=1;
 while(1)
 { 
DDRD=0b11111111;
if(a==1)
{

PORTD=0b00001001;
_delay_ms(1000);
a=a+1;

}

else if(a==2)
{

PORTD=0b00000001;
_delay_ms(1000);
a=a+1;
}

else if(a==3)
{

PORTD=0b00000011;
_delay_ms(1000);
a=a+1;
}



else if(a==4)
{

PORTD=0b00000010;
_delay_ms(1000);
a=a+1;
}
else if(a==5)
{

PORTD=0b00000110;
_delay_ms(1000);
a=a+1;
}

else if(a==6)
{

PORTD=0b00000100;
_delay_ms(1000);
a=a+1;
}



else if(a==7)
{

PORTD=0b00001100;
_delay_ms(1000);
a=a+1;
}

else if(a==8)
{

PORTD=0b00001000;
_delay_ms(1000);
a=a+1;
}
else if(a==9)
{

PORTD=0b00001001;
_delay_ms(1000);
a=1;
}

}

return 0;
}


