/* Write a program which accept number from user and print numbers till that number.

Input:8
Output:1 2 3 4 5 6 7 8

*/




#include<stdio.h>

void Display(int ino)
{
	int i=0;

	if(ino<0)
	{
		ino=-ino;
	}

	for(i=1;i<=ino;i++)
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

