/* A program that illustarte the usage of internal linkage. */


// Hello.c


#include<stdio.h>

int Fun();

int main()
{
	extern int a;

	printf("Value of a in main function is %d\n",a);

	Fun();
}

int a=10;
