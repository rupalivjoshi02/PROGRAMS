/* Write a program which accept number from user and print its numbers line.

Input:4
Output:-4 -3 -2 -1 0 1 2 3 4

*/




#include<stdio.h>

void Display(int ino)
{
	int i=0;

	if(ino<0)
	{
		ino=-ino;
	}

	for(i=-ino;i<=ino;i++)
	{
		printf("%d ",i);
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

