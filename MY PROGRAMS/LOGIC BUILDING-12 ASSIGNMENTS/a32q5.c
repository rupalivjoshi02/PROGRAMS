/* Write a program which checks whether first and last bit is On or OFF. First bit means bit number 1 and last bit means bit number 32. */




#include<stdio.h>

#define YES 1
#define NO 0

typedef unsigned int UINT;
typedef int BOOL;

BOOL Bit15(UINT ino)
{
	UINT imask=0,ires=0;

	imask=0X80000001;

	ires=imask&ino;

	if(ires==imask)
	{
		return(YES);
	}
	else
	{
		return(NO);
	}
}

int main()
{
	UINT ivalue=0;
	BOOL bret=NO;

	printf("Enter the no.:");
	scanf("%d",&ivalue);

	bret=Bit15(ivalue);

	if(bret==YES)
	{
		printf("Bit is on.");
	}
	else
	{
		printf("Bit is off.");
	}

	return(0);
}


