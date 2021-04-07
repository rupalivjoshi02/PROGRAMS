#include<stdio.h>

int Fun()
{
	auto int i=0;
	register auto int j=20;		//error
	int iret=0;

	iret=i+j;
	
	return(iret);
}

int main()
{
	printf("Inside main\n");

	Fun();

	return(0);
}
