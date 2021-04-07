/* Write a program which accept one number from user and check whether 9th or 12th bit is on or off.

Input:257
Output:YES

*/




#include<stdio.h>

#define YES 1
#define NO 0

typedef unsigned int UINT;
typedef int BOOL;

BOOL Checkbit(UINT ino)
{
	UINT imask=0,ires=0;

	imask=0X00000900;

	ires=imask&ino;

	if((ires==imask) || (ires==0X000000100) || (ires==0X000000800))
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

	bret=Checkbit(ivalue);

	if(bret==YES)
	{
		printf("Bits are on.");
	}
	else
	{
		printf("Bits are off.");

	}

	return(0);
}


