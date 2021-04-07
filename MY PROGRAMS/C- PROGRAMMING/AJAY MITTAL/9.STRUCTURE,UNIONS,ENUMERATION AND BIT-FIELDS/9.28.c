/* A program that illustrate the all memebers of a union object strats from the same memory location. */

#include<stdio.h>

union Variable
{
	char c;
	int i;
	float f;
};

int main()
{
	union Variable v;

	printf("Starting adderss of v is %p\n",&v);
	printf("Starting address of 1st member is %p\n",&v.c);
	printf("Starting address of 2nd member is %p\n",&v.i);
	printf("Starting address of 3rd member is %p\n",&v.f);
}
