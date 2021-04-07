/* a program that illustarte the sign of result of modulus operator. */

#include<stdio.h>

int main()
{
	int a=0;

	a=4%3;

	printf("a=%d\n",a);

	a=-4%3;

	printf("a=%d\n",a);

	a=4%-3;

	printf("a=%d\n",a);

	a=-4%-3;

	printf("a=%d\n",a);

	return(0);
}
