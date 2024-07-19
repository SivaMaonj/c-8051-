#include<reg52.h>
void delay(unsigned int t)
{	unsigned int i,j;
	for(i=0;i<=t;i++)
	{	
		for(j=0;j<=1275;j++)
		{
		}	
	}	
}
void main(void)
{
	P2 =0xFF;
	P1 =0x00;
	while(1)
  {	
		P1=P2&0xFF;
		delay(100);
	}
}