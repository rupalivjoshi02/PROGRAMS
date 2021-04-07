/* A program illustrating that an identifier can't be used of the region in which it is visible. */


#include<stdio.h>

void Fun();

int main()
{
	int a=20;

	printf("Value of a is %d\n",a);

	Fun();
}

void Fun()
{
	printf("Value of a is %d\n",a);
}


// Compilation error undefined symbol a in Fun function.
