/* Write a program which accept one number from user and toggle contents of first and last nibble of the number. Return modified number. (Nibble is a group of four bits) */




#include<stdio.h>

typedef unsigned int UINT;

UINT Nibble(UINT ino)
{
	UINT imask=0,ires=0;

	imask=0Xf000000f;

	ires=imask^ino;

	return(ires);
}

int main()
{
	UINT ivalue=0,iret=0;

	printf("Enter the no.:");
	scanf("%d",&ivalue);

	iret=Nibble(ivalue);

	printf("Modified no. is %d",iret);

	return(0);
}

