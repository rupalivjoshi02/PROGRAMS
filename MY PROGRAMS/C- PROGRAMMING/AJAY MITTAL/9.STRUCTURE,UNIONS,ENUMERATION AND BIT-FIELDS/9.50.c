/* A program that illustrates the use of an unnamed bit-fields for alignment purpose. */

#include<stdio.h>

struct Receiver
{
	unsigned int Parity:1;
	
	int :0;
	
	unsigned int Mode:1;
	unsigned int Bits:2;

	int data;
};

int main()
{
	struct Receiver Mobile;

	printf("The size of object Mobile is %d bytes.\n",sizeof(Mobile));
}
