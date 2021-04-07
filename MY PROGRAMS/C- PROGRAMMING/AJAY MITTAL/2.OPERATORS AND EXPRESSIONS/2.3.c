/* A program that illustarte the differnece between pre-increament and post increament */

#include<stdio.h>

int main()
{
	int a=2,b=2;
	int c=0,d=0;

	c=++a;
	d=b++;

	printf("a=%d,b=%d,c=%d,d=%d",a,b,c,d);

	return(0);	
}
