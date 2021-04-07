/* 4.Write a program which accept number from user and display its table.

Input:	2
Output:	2 4 6 8 10 12 14 16 18 20

Input:	5
Output:	5 10 15 20 25 30 35 40 45 50

Input:	-5
Output:	5 10 15 20 25 30 35 40 45 50	*/




#include<stdio.h>

void Display(int ino)
{
	int imult=1,icnt=0;

	if(ino<0)
	{
		ino=-ino;
	}

	icnt=1;

	while(icnt<=10)
	{
		imult=ino*icnt;

		printf("%d\t",imult);

		icnt++;
	}
}

int main()
{
	int ivalue=0;

	printf("\nEnter the no.:\n");
	scanf("%d",&ivalue);
	
	Display(ivalue);	

	return(0);
}

