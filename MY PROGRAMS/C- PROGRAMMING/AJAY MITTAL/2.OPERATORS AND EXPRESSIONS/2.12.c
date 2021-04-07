/* A program that illustarte the use of comma operator. */

#include<stdio.h>

int main()
{
	int a=0,b=0;

	a=1,2,3,4,5;
	b=(1,2,3,4,5);

	printf("%d\n%d",a,b);

	return(0);
}
