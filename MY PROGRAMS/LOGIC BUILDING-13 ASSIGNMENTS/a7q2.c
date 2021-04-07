/* Write a program which accept number from user and return the count of odd digits.

Input:2395
Output:3

Input:1018
Output:2

Input:-1018
Output:2

Input:8462
Output:0

*/




#include<stdio.h>

int Countodd(int ino)
{
	int idig=0,icnt=0;

	if(ino<0)
	{
		ino=-ino;
	}

	while(ino>0)
	{
		idig=ino%10;

		if((idig%2)!=0)
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

	iret=Countodd(ivalue);

	printf("Odd count is %d",iret);

	return(0);
}


