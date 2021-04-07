#include<stdio.h>

void Fun();

int main()
{
	printf("Inside main\n");

	Fun();
	Fun();

	return(0);
}

void Fun()
{
	int i=10;

	i++;

	printf("%d\n",i);
}
