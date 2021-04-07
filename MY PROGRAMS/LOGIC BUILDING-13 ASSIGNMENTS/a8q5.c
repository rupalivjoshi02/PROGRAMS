/* Write a program which accept number from user and display its table in reverse order.

Input:5
Output:50 45 40 35 30 25 20 15 10 5

Input:-5
Output:50 45 40 35 30 25 20 15 10 5

Input:2
Output:20 18 16 14 12 10 8 6 4 2

*/




#include<stdio.h>

void Display(int ino)
{
	int i=0,imult=1;

	if(ino<0)
	{
		ino=-ino;
	}

	for(i=10;i>=1;i--)
	{
		imult=i*ino;

		printf("%d ",imult);	
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

