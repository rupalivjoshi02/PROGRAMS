/* A program that illustarte the use of the sizeof operator on structure. */

#include<stdio.h>

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
