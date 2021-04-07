/* Write a program which accept one number from user and on its first 4 bits. Return modified number. 

Input:73
Output:79

*/




#include<stdio.h>

typedef unsigned int UINT;

UINT Uint(UINT ino)
{
	UINT imask=0,ires=0;

	imask=0X0000000f;

	ires=imask|ino;

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
