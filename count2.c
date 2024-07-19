#include<reg52.h>
unsigned int k;
void delay(unsigned int t)

{ unsigned int i,j;
	for(i=0;i<=t;i++)
	{for(j=0;j<=1275;j++)
		{
		}
	}
}
void main(void)
{ P1=0x00;
  while(1)
  { for(k=0;k<=225;k++)
    { P1=k;
	  delay(50);
	}
  }
}