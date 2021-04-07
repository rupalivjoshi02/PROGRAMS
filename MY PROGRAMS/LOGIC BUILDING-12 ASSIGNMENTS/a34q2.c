/* Write a program which accept one number and position from user and off that bit. Return modified number.

Input:No.:10,ipos=2
Output:8

*/




#include<stdio.h>

typedef unsigned int UINT;

UINT Offbit(UINT ino,UINT ipos)
{
	UINT imask=0,ires=0;

	imask=0X00000001;

	imask=imask<<(ipos-1);
	ires=imask&ino;

	if(ires==imask)
	{
		ires=ino^imask;
	}

	return(ires);
}

int main()
{
	UINT ivalue1=0,ivalue2=0,iret=0;

	printf("Enter the no. and position:");
	scanf("%d%d",&ivalue1,&ivalue2);

	iret=Offbit(ivalue1,ivalue2);

	printf("Modified no. is %d",iret);

	return(0);
}



