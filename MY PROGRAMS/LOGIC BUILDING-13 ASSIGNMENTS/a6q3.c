/* Write a program which accept number from user and count frequency of 2 in it.

Input:2395
Output:1

Input:1018
Output:0

Input:9000
Output:0

Input:922432
Output:3

*/




#include<stdio.h>

int Two(int ino)
{
	int idig=0,icnt=0;

	if(ino<0)
	{
		ino=-ino;
	}

	while(ino>0)
	{
		idig=ino%10;

		if(idig==2)
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

	iret=Two(ivalue);

	printf("Freq. is %d",iret);

	return(0);
}



