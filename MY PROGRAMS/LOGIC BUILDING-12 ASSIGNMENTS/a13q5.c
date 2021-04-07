//Write a program which accept number from user and return difference between summation of even digits and summation of odd digits.

#include<stdio.h>

int Difference(int ino)
{
	int idig=0,isum1=0,isum2=0,idiff=0;

	if(ino<0)
	{
		ino=-ino;
	}

	while(ino>0)
	{
		idig=ino%10;

		if((idig%2)==0)
		{
			isum1=isum1+idig;
		}
		else
		{
			isum2=isum2+idig;
		}

		ino=ino/10;
	}

	idiff=isum1-isum2;

	return(idiff);
}

int main()
{
	int ivalue=0,iret=0;

	printf("Enter the no.:");
	scanf("%d",&ivalue);

	iret=Difference(ivalue);

	printf("Difference is %d",iret);

	return(0);
}
