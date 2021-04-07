/* 	1.Write a program which accept number from user and print that number of $ & * on screen.

	Input:	5
	Output:	$ * $ * $ * $ * $ *

	Input:	3
	Output:	$ * $ * $ * 

	Input:	-3
	Output:	$ * $ * $ * 	*/





#include<stdio.h>

void Display(int ino)
{
	int icnt=0;

	if(ino<0)
	{
		ino=-ino;
	}

	icnt=1;

	while(icnt<=ino)
	{
		printf("$\t");
		printf("*\t");

		icnt++;
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
