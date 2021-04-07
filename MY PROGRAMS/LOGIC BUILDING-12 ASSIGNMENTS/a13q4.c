//Write a program which accept number from user and return multiplication of all digits.

#include<stdio.h>

int Multiply(int ino)
{
	int idig=0,imult=0;

	if(ino<0)
	{
		ino=-ino;
	}

	while(ino>0)
	{
		imult=1;

		idig=ino%10;

		if(idig!=0)
		{
			imult=imult*idig;
		}
	
		ino=ino/10;
	}

	return(imult);
}

int main()
{
	int ivalue=0,iret=0;

	printf("Enter the no.:");
	scanf("%d",&ivalue);

	iret=Multiply(ivalue);

	printf("Multiplication is %d",iret);

	return(0);
}


