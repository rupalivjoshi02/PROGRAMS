/* Write a program which accept one number from user and off 7th bit of that number if it is on. Return modified number.

Input:79
Output:15

*/




#include<stdio.h>

typedef unsigned int UINT;

UINT Offbit(UINT ino)
{
	UINT imask=0,ires=0;

	if(ino<0)
	{
		ino=-ino;
	}

	imask=0X00000040;

	ires=ino^imask;

	return(ires);
}

int main()
{
	UINT ivalue=0,iret=0;

	printf("Enter the no.:");
	scanf("%d",&ivalue);

	iret=Offbit(ivalue);

	printf("Modified no. is %d",iret);

	return(0);
}

