/* A program that illustrate the use of the sizeof operator on union. */

#include<stdio.h>

union Variables
{
	char c;
	int i;
	float f;
	double d;
};

int main()
{
	union Variables v;

	printf("Size of union variables is %d bytes\n",sizeof(union Variables));
	printf("Size of object of union variables is %d bytes\n",sizeof(v));
}
