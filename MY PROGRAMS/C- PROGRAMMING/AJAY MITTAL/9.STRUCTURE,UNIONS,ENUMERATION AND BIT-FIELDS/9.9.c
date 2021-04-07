/* A program that illustarte the use of the sizeof operator including internal and trailing padding. */

#include<stdio.h>

#pragma option -a

struct Pad
{
	char a;
	int b;
	char c;
	float d;
};

int main()
{
	struct Pad p;

	printf("Size of structure pad is %ld bytes\n",sizeof(struct Pad));
	printf("Size of object of structure pad is %ld bytes\n",sizeof p);

	return(0);
}
