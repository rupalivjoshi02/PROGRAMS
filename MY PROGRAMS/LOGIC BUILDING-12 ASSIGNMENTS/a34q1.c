/* Write a program which accept one number and position from user and check whether bit at that position is on or off. If bit is one return TURE otherwise return FALSE.

Input:No.:10,ipos=2
Output:YES

*/




#include<stdio.h>

#define YES 1
#define NO 0

typedef unsigned int UINT;
typedef int BOOL;

BOOL Checkbit(UINT ino,UINT ipos)
{
	UINT imask=0,ires=0;

	imask=0X00000001;

	imask=imask<<(ipos-1);
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
	UINT ivalue1=0,ivalue2=0;
	BOOL bret=NO;

	printf("Enter the no. and position:");
	scanf("%d%d",&ivalue1,&ivalue2);

	bret=Checkbit(ivalue1,ivalue2);

	if(bret==YES)
	{
		printf("Bit is on");
	}
	else
	{
		printf("Bit is off");
	}

	return(0);
}


