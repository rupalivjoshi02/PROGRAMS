/* A program illustrating hat there can be multiple identical declaration of an identifier in the same scope. */


#include<stdio.h>

int main()
{
	extern int a;
	extern int a;

	printf("The value of a is %d\n",a);
}

int a=20;			//global or file scope

