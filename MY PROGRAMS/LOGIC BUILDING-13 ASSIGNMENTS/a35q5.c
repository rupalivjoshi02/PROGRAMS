/* Write a program which accept one number from user and range of positions from user. Toggle all bits from that range.

Input:	No:897
	Strat:9
	End:13
Output:	8122

*/

#include<stdio.h>

typedef unsigned int UINT;

int Return(UINT ino,UINT istart,UINT iend)
{
	UINT ires=0,imask=0,imask1=0,imask2=0;

	if((istart<1) || (istart>32) || (iend<1) || (iend>32) || (istart>iend))
	{
		return(0);
	}

	imask1=0Xffffffff;
	imask2=0Xffffffff;

	imask1=imask1<<(istart-1);
	imask2=imask2>>(32-iend);
	imask=imask1&imask2;
	ires=imask^ino;

	return(ires);
}

int main()
{	
	UINT ivalue1=0,ivalue2=0,ivalue3=0,iret=0;

	printf("Enter the no.:\n");
	scanf("%d",&ivalue1);

	printf("Enter the starting range:\n");
	scanf("%d",&ivalue2);

	printf("Enter the ending range:\n");
	scanf("%d",&ivalue3);

	iret=Return(ivalue1,ivalue2,ivalue3);

	printf("Toggled bits are %d",iret);

	return(0);
}	
