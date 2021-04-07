/* Write a program which accept number from user and display its digits in reverse order.

Input:2395
Output:	5
	9
	3
	2

Input:1018
Output:	8
	1
	0
	1

Input:-1018
Output:	8
	1
	0
	1

Input:9000
Output:	0
	0
	0
	9

*/




#include<stdio.h>

void Display(int ino)
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

	printf("Enter the no.:");
	scanf("%d",&ivalue);

	Display(ivalue);

	return(0);
}



	

