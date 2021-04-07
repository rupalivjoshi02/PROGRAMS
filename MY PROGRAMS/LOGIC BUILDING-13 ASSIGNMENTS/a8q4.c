/* Write a program which accept number from user and display its table.

Input:5
Output:5 10 15 20 25 30 35 40 45 50

Input:-5
Output:5 10 15 20 25 30 35 40 45 50

Input:2
Output:2 4 6 8 10 12 14 16 18 20

*/




#include<stdio.h>

void Display(int ino)
{
	int i=0,imult=1;

	if(ino<0)
	{
		ino=-ino;
	}

	for(i=1;i<=10;i++)
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
