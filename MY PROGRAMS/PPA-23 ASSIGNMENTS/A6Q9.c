#include<stdio.h>

void Fun();
void Gun();

int main()
{
	printf("Inside main\n");

	Fun();
	Gun();

	return(0);
}

void Gun()
{
	printf("Inside gun\n");
}

void Fun()
{
	printf("Inside fun\n");
}
