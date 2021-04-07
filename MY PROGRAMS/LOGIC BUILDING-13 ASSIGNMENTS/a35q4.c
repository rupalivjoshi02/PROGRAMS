/* Write a program which accept one number , two positions from user and check whether bit at first or bit at second position is ON or OFF.

Input:	No:10
	Pos1:3
	Pos2:7
Output:	NO

*/

#include<stdio.h>

#define YES 1
#define NO 0

typedef unsigned int UINT;
typedef int BOOL;

BOOL Bool(UINT ino,UINT ipos1,UINT ipos2)
{
	UINT ires=0,imask=0,imask1=0,imask2=0;

	if((ipos1<1) || (ipos1>32) || (ipos2<1) || (ipos2>32))
	{
		return(NO);
	}

	imask1=0X00000001;
	imask2=0X00000001;

	imask1=imask1<<(ipos1-1);
	imask2=imask2<<(ipos2-1);
	imask=imask1|imask2;
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
	UINT ivalue1=0,ivalue2=0,ivalue3=0;
	BOOL bret=NO;

	printf("Enter the no.:\n");
	scanf("%d",&ivalue1);

	printf("Enter the no.:\n");
	scanf("%d",&ivalue2);

	printf("Enter the 2nd Position:\n");
	scanf("%d",&ivalue3);

	bret=Bool(ivalue1,ivalue2,ivalue3);

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
