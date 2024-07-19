#include<reg52.h>
void delay(unsigned int t)
{ unsigned int i,j;
	for(i=0;i<=t;i++)
	{for(j=0;j<=1275;j++)
		{
		}
	}
}
sbit en=P1^0;
sbit v5=P1^1;
sbit in1=P1^2;
sbit in2=P1^3;
void main(void)
{
  P1=0x00;
  while(1)
  { in1=1;
    in2=0;
	delay(100);
	in1=0;
	in2=1;
	delay(200);
  }
  
}