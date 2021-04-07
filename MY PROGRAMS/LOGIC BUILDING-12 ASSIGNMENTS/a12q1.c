//Write a program which accept number from user and display its digits in reverse order.

#include<stdio.h>

void Digit(int ino)
{
	int idig=0,irev=0;

	if(ino<0)
	{
		ino=-ino;
	}

	while(ino>0)
	{
		idig=ino%10;
		
		printf("\n%d",idig);

		ino=ino/10;
	}

}

int main()
{
	int ivalue=0;

	printf("Enetr the no.:");
	scanf("%d",&ivalue);

	Digit(ivalue);

	return(0);
}

