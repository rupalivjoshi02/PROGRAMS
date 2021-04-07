/* 	3.Write a program which accept number from user and print its numbers line.

	Input:	4
	Output:	-4 -3 -2 -1 0 1 2 3 4	*/





#include<stdio.h>

void Display(int ino)
{
	int icnt=0;

	if(ino<0)
	{
		ino=-ino;
	}

	icnt=-ino;

	while(icnt<=ino)
	{
		printf("%d\t",icnt);

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
