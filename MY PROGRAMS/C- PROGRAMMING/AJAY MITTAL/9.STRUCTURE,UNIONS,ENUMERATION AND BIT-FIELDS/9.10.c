/* A program that finds the size of a structure object and a structure type after packing the structure members according to the given pack size. */

#include<stdio.h>

#pragma pack(2)

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
