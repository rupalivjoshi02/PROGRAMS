#include<stdio.h>

auto int no=10;	//error

void Gun()
{
	register float fvalue=20.3;

	printf("Value of fvalue is %d\n",no);
}

int main()
{
	printf("Inside main\n");

	Gun();

	return(0);
}
