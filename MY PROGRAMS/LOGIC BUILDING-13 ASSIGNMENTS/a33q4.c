/* Write a program which accept one number from user and toggle the  7th and 10th bit of that number. Return modified number. 

Input:137
Output:713

*/




#include<stdio.h>

typedef unsigned int UINT;

UINT Uint(UINT ino)
{
	UINT imask=0,ires=0;

	imask=0X00000240;

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
