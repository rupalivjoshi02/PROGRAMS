/* Write a recursive program which accept number from user and return largest digit.

Input:	87983
Output:	9

*/




#include<stdio.h>

int ReturnR(int ino)
{
	static int idig=0,imax=0;

	if(ino<0)
	{
		ino=-ino;
	}

	if(ino!=0)
	{
		idig=ino%10;

		if(idig>imax)
		{
			imax=idig;
		}

		ino=ino/10;

		ReturnR(ino);
	}

	return(imax);
}

int main()
{
	int iret=0,ivalue=0;
	
	printf("\nInside main fun.\n");

	printf("\nEnter the no.: \n");
	scanf("%d",&ivalue);

	iret=ReturnR(ivalue);

	printf("\nLargest digit from the given no. is %d\n",iret);

	printf("\nEnd of the main fun.\n");

	return(0);
}
