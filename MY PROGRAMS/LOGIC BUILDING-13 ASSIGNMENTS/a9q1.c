/* Write a program which accept number from user and print that number of $ & * on screen.

Input:5
Output:$ * $ * $ * $ * $ *

Input:-3
Output:$ * $ * $ * 

Input:3
Output:$ * $ * $ * 

*/




#include<stdio.h>

void Display(int ino)
{
	int i=0;

	if(ino<0)
	{
		ino=-ino;
	}

	for(i=0;i<ino;i++)
	{
		printf("$ * ");
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

