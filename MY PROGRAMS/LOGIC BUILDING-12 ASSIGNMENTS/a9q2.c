/* 2.Accept amount in US dollar and return its corresponding value in Indian currency. Consider 1$ as 70 rupees.

Input:	10
Output:	700

Input:	3
Output:	210

Input:	1200
Output:	84000	*/




#include<stdio.h>

int Return(int ino)
{
	int irs=0;

	if(ino<0)
	{
		ino=-ino;
	}

	irs=ino*70;

	return(irs);
}

int main()
{
	int ivalue=0,iret=0;

	printf("\nEnter the no.: \n");
	scanf("%d",&ivalue);

	iret=Return(ivalue);

	printf("\nConversion of dollar in indian rupees %d \n",iret);	

	return(0);
}

