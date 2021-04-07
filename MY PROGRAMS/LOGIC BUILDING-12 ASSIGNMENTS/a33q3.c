/* Write a program which accept one number from user and toggle 7th bit of that number. Return modified number.

Input:137
Output:201

*/




#include<stdio.h>

typedef unsigned int UINT;

UINT Offbit(UINT ino)
{
	UINT ires=0,imask=0;

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



