#include<reg52.h>
void delay(unsigned int t);
void main(void)
{
	P2 = 0x00;
	while(1)
	{
		P2=0x88;
		delay(1000);
		P2=0xEB;
		delay(1000);
		P2=0x4C;
		delay(1000);
		P2=0x49;
		delay(1000);
		P2=0x2B;
		delay(1000);
		P2=0x19;
		delay(1000);
		P2=0x18;
		delay(1000);
		P2=0xCB;
		delay(1000);
		P2=0x08;
		delay(1000);
		P2=0x09;
		delay(1000);
		
	}
}	
void delay(unsigned int t)
{unsigned int i,j;
	for(i=0;i<=t;i++)
	{
		for (j=0;j<=1275;j++)
		{
		}
	}
}
	