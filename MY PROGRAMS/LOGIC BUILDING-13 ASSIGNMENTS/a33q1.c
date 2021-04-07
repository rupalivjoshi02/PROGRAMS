/* Write a program which accept one number from user and off 7th bit of that number if it is on. Return modified number. 

Input:79
Output:15

*/




#include<stdio.h>

typedef unsigned int UINT;

UINT Uint(UINT ino)
{
	UINT imask=0,ires=0;

	imask=0X00000040;

	ires=imask^ino;

	return(ires);
}

int main()
{
	UINT iret=0,ivalue=0;

	printf("Enter the no.:");
	scanf("%d",&ivalue);

	iret=Uint(ivalue);

	printf("Modified no. is %d",iret);

	return(0);
}
