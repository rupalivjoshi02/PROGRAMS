/* Write a program which accept N and print first 5 multiples of N.

Input:4
Output:4 8 12 16 20

*/




#include<stdio.h>

void Display(int ino)
{
	int i=0,imult=1;

	if(ino<0)
	{
		ino=-ino;
	}

	for(i=1;i<=5;i++)
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
