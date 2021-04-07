/* Write a program which accept one number from user and on its first 4 bits. Return modified number.

Input:73
Output:79

*/




#include<stdio.h>

typedef unsigned int UINT;

UINT Onbit(UINT ino)
{
	UINT ires=0,imask=0;

	imask=0X0000000f;

	ires=ino|imask;

	return(ires);
}

int main()
{
	UINT ivalue=0,iret=0;

	printf("Enter the no.:");
	scanf("%d",&ivalue);

	iret=Onbit(ivalue);

	printf("Modified no. is %d",iret);

	return(0);
}


