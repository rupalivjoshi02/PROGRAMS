#include<stdio.h>

void Fun();

int main()
{
	int i=10;
	auto int j=20;
	register int k=30;

	Fun();
	
	return(0);
}

void Fun()
{
	//register;
	
	printf("Inside fun");
}
