/* A program that illustarte that operand and sizeof operator is not evaluated. */

#include<stdio.h>

int main()
{
	int a=1,b=0;

	b=sizeof(++a);
	
	printf("%d\n%d",a,b);

	return(0);
}
