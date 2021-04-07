/* Write a program which accept one number from user and range of positions from user. Toggle all bits from that range.

Input:No.:897,istart=9,iend=13
Output:8122

*/




#include<stdio.h>

typedef unsigned int UINT;

UINT Range(UINT ino,UINT istart,UINT iend)
{
	UINT imask=0,imask1=0,imask2=0,ires=0;

	if((istart>iend) || (istart<1) || (istart>32) || (iend<1) || (iend>32))
	{
		return(0);
	}

	imask1=0Xffffffff;
	imask2=0Xffffffff;

	imask1=imask1<<(istart-1);
	imask2=imask2>>(32-iend);
	imask=imask1&imask2;
	ires=ino^imask;

	return(ires);
}

int main()
{
	UINT ivalue1=0,ivalue2=0,ivalue3=0,iret=0;

	printf("Enter the no. and range:");
	scanf("%d%d%d",&ivalue1,&ivalue2,&ivalue3);

	iret=Range(ivalue1,ivalue2,ivalue3);

	printf("Toggled bit is %d",iret);

	return(0);
}

