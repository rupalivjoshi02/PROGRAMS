/* 	2.Write a program which accept number from user and display its factors in decreasing order.

	Input:	12
	Output:	6 4 3 2 1

	Input:	13
	Output:	1

	Input:	10
	Output:	5 2 1		*/




#include<stdio.h>

void Display(int ino)
{
	int icnt=0;

	if(ino<0)
	{
		ino=-ino;
	}

	icnt=ino/2;

	while(icnt>=1)
	{
		if((ino%icnt)==0)
		{
			printf("%d\t",icnt);
		}
	
		icnt--;
	}
}

int main()
{
	int ivalue=0,iret=0;

	printf("\nEnter the no.: \n");
	scanf("%d",&ivalue);

	Display(ivalue);	

	return(0);
}
