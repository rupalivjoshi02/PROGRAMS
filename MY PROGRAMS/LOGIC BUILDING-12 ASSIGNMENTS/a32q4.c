/* Write a program which checks whether 7th & 8th & 9th bit is On or OFF. */




#include<stdio.h>

#define YES 1
#define NO 0

typedef unsigned int UINT;
typedef int BOOL;

BOOL Bit15(UINT ino)
{
	UINT imask=0,ires=0;

	imask=0X000001c0;

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


