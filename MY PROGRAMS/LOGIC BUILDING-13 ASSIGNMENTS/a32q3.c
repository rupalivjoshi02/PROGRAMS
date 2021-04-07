/* Write a program which checks whether 7th,15th,21st and 28th bit is On or OFF. */




#include<stdio.h>

#define YES 1
#define NO 0

typedef int BOOL;
typedef unsigned int UINT;

BOOL Bool(UINT ino)
{
	UINT imask=0,ires=0;

	imask=0X08104040;

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
