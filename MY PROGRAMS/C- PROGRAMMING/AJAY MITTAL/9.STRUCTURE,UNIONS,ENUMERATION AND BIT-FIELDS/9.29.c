/* A program that illustarte the only 1st member of a union object can be initialised. */

#include<stdio.h>

union Variable
{
	char c;
	int i;
	float f;
};

int main()
{
	union Variable v={'A'};

	printf("The values of the members are: %c\n %d\n %f\n",v.c,v.i,v.f);
}
