/* Write a recursive program which accept number from user and return its product of digits.

Input:	523
Output:	30

*/




#include<stdio.h>

int ReturnR(int ino)
{
	static int imult=1,idig=0;

	if(ino<0)
	{
		ino=-ino;
	}

	if(ino==1)
	{
		return(1);
	}

	if(ino!=0)
	{
		idig=ino%10;
	
		if(idig==0)
		{
			idig=imult;
		}

		imult=imult*idig;
		ino=ino/10;

		ReturnR(ino);
	}

	if(imult==1)
	{
		imult=0;
	}

	return(imult);
}

int main()
{
	int iret=0,ivalue=0;
	
	printf("\nInside main fun.\n");

	printf("\nEnter the no.: \n");
	scanf("%d",&ivalue);

	iret=ReturnR(ivalue);

	printf("\nMultiplication of the given no. is %d\n",iret);

	printf("\nEnd of the main fun.\n");

	return(0);
}
