#include<reg51.h>
void delay(int x)
{
	int i,j;
	for(i=0;i<x;i++)
		for(j=0;j<115;j++);
}

sbit LED = P2^0;

void main()
{
	while(1)
	{
		LED =~ LED;
		delay(500);
	}
}