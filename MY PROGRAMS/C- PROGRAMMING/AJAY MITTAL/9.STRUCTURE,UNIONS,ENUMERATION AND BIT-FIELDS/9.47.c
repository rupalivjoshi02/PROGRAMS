/* A program that illustrates how to access the bit-fields. */

#include<stdio.h>

struct Receiver
{
	unsigned int Parity:1;
	unsigned int Mode:1;
	unsigned int Bits:2;

	int data;
};

int main()
{
	struct Receiver Mobile={1,1,2,200};

	if(Mobile.Parity==0)
	{
		printf("The receiver works with even parity.\n");
	}
	else
	{
		printf("The receiver works with odd parity.\n");
	}

	if(Mobile.Mode==0)
	{
		printf("The receiver supports synchronous data transmission.\n");
	}
	else
	{
		printf("The receiver supports asynchronous data transmission.\n");
		printf("There should be %d bits\n",Mobile.Bits);
	}

}
