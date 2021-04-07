/* 	5. Write a recursive program which accept number from user and return its product of digits.

	Input:	523
	Output:	30	*/




#include<stdio.h>

int ReturnR(int ino)
{
	static int imult=1,idig=0;

	if(ino<0)
	{
		ino=-ino;
	}

	if(ino==0)
	{
		return(0);
	}

	if(ino!=0)
	{
		idig=ino%10;
		imult=imult*idig;
		ino=ino/10;

		ReturnR(ino);
	}

	return(imult);
}

int main()
{
	int iret=0,ivalue=0;

	printf("\nEnter the no.: \n");
	scanf("%d",&ivalue);

	iret=ReturnR(ivalue);

	printf("\nProduct of all digits of the given no. is %d\n",iret);

	return(0);
}
