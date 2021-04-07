/* A program that illustarte the usage of external linkage. */


#include<stdio.h>

Fun();

int main()
{
	extern int a;

	printf("Value of a is %d\n",a);

	Fun();
}
