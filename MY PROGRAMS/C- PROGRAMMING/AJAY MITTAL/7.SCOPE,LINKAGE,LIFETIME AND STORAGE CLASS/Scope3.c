/* a program illustrating that the type of an identifier in multiple declaration must be identical. */


#include<stdio.h>

int main()
{
	extern int a;
	extern float a; // (not allowed)			

	printf("Non-identical declaration in same scope\n");
	printf("The value of a is %f",a);
}

//error in this program
