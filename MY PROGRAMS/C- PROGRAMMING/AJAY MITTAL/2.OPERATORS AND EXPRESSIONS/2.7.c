/* A program that illustarte the operands of modulas operator must be of interger type. */

#include<stdio.h>

int main()
{
	int a=0;

	a=2%3.0;

	printf("a=%d\n",a);

	return(0);
}

/* Error: Operand of modulus operator should should be integer type. */
