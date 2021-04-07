/* Write a program which checks whether 7th,8th,9st bit is On or OFF. */




#include<stdio.h>

#define YES 1
#define NO 0

typedef int BOOL;
typedef unsigned int UINT;

BOOL Bool(UINT ino)
{
	UINT imask=0,ires=0;

	imask=0X000001C0;

	ires=imask&ino;

	if(imask==ires)
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

	bret=Bool(ivalue);

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
