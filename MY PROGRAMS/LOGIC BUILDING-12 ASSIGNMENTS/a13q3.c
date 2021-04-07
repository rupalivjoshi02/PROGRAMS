//Write a program which accept number from user and return the count of digits in between 3 and 7.


#include<stdio.h>

int Range(int ino)
{
	int idig=0,icnt=0;

	if(ino<0)
	{
		ino=-ino;
	}

	while(ino>0)
	{
		idig=ino%10;

		if((idig>3) && (idig<7))
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

	iret=Range(ivalue);

	printf("Freq. is %d",iret);

	return(0);
}


