#include<reg52.h>
void delay(unsigned int t)
{ unsigned int i,j;
	for(i=0;i<=t;i++)
	{
		for(j=0;j<=1275;j++)
		{
		}
	}
}
sbit C4=P1^0;
sbit C3=P1^1;
sbit C2=P1^2;
sbit C1=P1^3;
sbit R4=P1^4;
sbit R3=P1^5;
sbit R2=P1^6;
sbit R1=P1^7;


void sevnsrg(unsigned char k)
{
	
	
	if(k==0)
	{ P2=0x88;
	}
	if(k==1)
	{ P2=0xEB;
	}
	if(k==2)
	{ P2=0x4C;
	}
	if(k==3)
	{ P2=0x49;
	}
	if(k==4)
	{ P2=0x2B;
	}
	if(k==5)
	{ P2=0x19;
	}
	if(k==6)
	{ P2=0x18;
	}
	if(k==7)
	{ P2=0xCB;
	}
	if(k==8)
	{ P2=0x08;
	}
	if(k==9)
	{ P2=0x09;
	}
}

 void rowfinder1()
{ R1=R2=R3=R4=1;
	C1=C2=C3=C4=0;
	if(R1==0)
	{ sevnsrg(1);
	
	}
if(R2==0)
	{ sevnsrg(4);
	
	}		
if(R3==0)
	{ sevnsrg(7);
	
	}		
if(R4==0)
	{ sevnsrg(0);
	
	}			
}
 void rowfinder2()
{ R1=R2=R3=R4=1;
	C1=C2=C3=C4=0;
	if(R1==0)
	{ sevnsrg(2);
	
	}
if(R2==0)
	{ sevnsrg(5);
	
	}		
if(R3==0)
	{ sevnsrg(8);
	
	}		
if(R4==0)
	{ sevnsrg(0);
	
	}			
}
 void rowfinder3()
{ R1=R2=R3=R4=1;
	C1=C2=C3=C4=0;
	if(R1==0)
	{ sevnsrg(3);
	
	}
if(R2==0)
	{ sevnsrg(6);
	
	}		
if(R3==0)
	{ sevnsrg(9);
	
	}		
if(R4==0)
	{ sevnsrg(0);
	
	}			
}
 void rowfinder4()
{ R1=R2=R3=R4=1;
	C1=C2=C3=C4=0;
	if(R1==0)
	{ sevnsrg(0);
	
	}
if(R2==0)
	{ sevnsrg(0);
	
	}		
if(R3==0)
	{ sevnsrg(0);
	
	}		
if(R4==0)
	{ sevnsrg(0);
	
	}			
}

void main(void)
{
	while(1)
	{
		C1=C2=C3=C4=1;
		R1=R2=R3=R4=0;
		if(C1==0)
			rowfinder1();
		if(C2==0)
			rowfinder1();
		if(C3==0)
			rowfinder1();
		if(C4==0)
			rowfinder1();
		

		
	}
}
	
	