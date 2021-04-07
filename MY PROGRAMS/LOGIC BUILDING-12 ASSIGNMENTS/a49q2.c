/* Write a recursive program which accept number from user and return summation of its digits.

Input:	879
Output:	24

*/




#include<stdio.h>

int ReturnR(int ino)
{
	static int isum=0,idig=0;

	if(ino<0)
	{
		ino=-ino;
	}
	
	if(ino!=0)
	{
		idig=ino%10;
		isum=isum+idig;
		ino=ino/10;

		ReturnR(ino);
	}

	return(isum);
}

int main()
{
	int ivalue=0,iret=0;
	
	printf("\nInside main fun.\n");

	printf("\nEnter the no.: \n");
	scanf("%d",&ivalue);

	iret=ReturnR(ivalue);

	printf("\nSummation is %d\n",iret);

	printf("\nEnd of the main fun.\n");

	return(0);
}
