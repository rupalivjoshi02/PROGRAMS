/* 5.Write a program which accept N and print first 5 multiples of N.

Input:	4
Output:	4 8 12 16 20	*/





#include<stdio.h>

void Display(int ino)
{
	int icnt=0,imult=1;

	if(ino<0)
	{
		ino=-ino;
	}

	for(icnt=1;icnt<=5;icnt++)
	{
		imult=ino*icnt;

		printf("%d\t",imult);
	}
}

int main()
{
	int ivalue=0;

	printf("\nEnter the no.: \n");
	scanf("%d",&ivalue);

	Display(ivalue);

	return(0);
}
