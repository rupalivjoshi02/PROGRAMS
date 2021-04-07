/* A program that ilustrate the concept of the same scope. */


#include<stdio.h>

Fun();

int c;

int main()
{
	int a,b;

	printf("a and b have same scope\n");
	printf("They have local or block scope\n");

	Fun();
}

int d;

Fun()
{
	printf("c and d have the same scope\n");
	printf("They have global or file scope\n");
}
