/* 	4.Write a program which accepts N from user and print all odd numbers up to N.

	Input:	18
	Output:	1 3 5 7 9 11 13 15 17	*/




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
		if((icnt%2)!=0)
		{
			printf("%d\t",icnt);
		}

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
