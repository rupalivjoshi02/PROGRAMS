/* Write a program which checks whether 15th bit is On or OFF. */




#include<stdio.h>

#define YES 1
#define NO 0

typedef int BOOL;
typedef unsigned int UINT;

BOOL Bool(UINT ino)
{
	UINT imask=0,ires=0;

	imask=0X00004000;

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
