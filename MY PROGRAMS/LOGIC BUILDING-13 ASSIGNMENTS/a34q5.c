/* Write a program which accept one number from user and toggle contents of first and last nibble of the number. Return modified number. (Nibble is a group of four bits). */




#include<stdio.h>

typedef unsigned int UINT;

UINT Uint(UINT ino)
{
	UINT ires=0,imask=0;

	imask=0Xf000000f;

	ires=imask^ino;

	return(ires);
}

int main()
{
	UINT ivalue=0,iret=0;

	printf("enter the no.:");
	scanf("%d",&ivalue);

	iret=Uint(ivalue);

	printf("Modified bits is %d",iret);

	return(0);
}
