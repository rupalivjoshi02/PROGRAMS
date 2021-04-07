//Write a program which accept number from user and count frequency of 4 in it.

#include<stdio.h>

int Four(int ino)
{
	int idig=0,icnt=0;

	if(ino<0)
	{
		ino=-ino;
	}

	while(ino>0)
	{
		idig=ino%10;
	
		if(idig==4)
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

	printf("Enter thye no.:");
	scanf("%d",&ivalue);

	iret=Four(ivalue);

	printf("Freq. of 4 is %d",iret);

	return(0);
}
