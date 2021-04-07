//Write a program which accept number from user and return the count of even digits.

#include<stdio.h>

int Even(int ino)
{
	int icnt=0,idig=0;

	if(ino<0)
	{
		ino=-ino;
	}

	while(ino>0)
	{
		idig=ino%10;

		if((idig%2)==0)
		{
			icnt++;
		}

		ino=ino/10;
	}

	return(icnt);
}

int main()
{
	int ivalue=0,iret=0;

	printf("Enter the no.:");
	scanf("%d",&ivalue);

	iret=Even(ivalue);

	printf("Freq. is %d",iret);

	return(0);
}

