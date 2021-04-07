/* A program illustrating that the type of an identifier must be identical in all the declaration irrespective of the scpe in which the dwclaration is present. */


#include<stdio.h>

extern int a;

int main()
{
	extern float a;

	printf("This is not allowed");
}


//Compilation error type mismatch in re-declaration of a in main function
