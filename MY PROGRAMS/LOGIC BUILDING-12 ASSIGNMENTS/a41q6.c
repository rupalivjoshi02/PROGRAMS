/* Write a program which number from user and display below pattern.

Input:	7846
Output:	6 # # # # # 
	4 # # #  
	8 # # # # # # #
	7 # # # # # #

*/




#include<stdio.h>

void Display(int ino)
{
	int i=0,idig=0;

	if(ino<0)
	{	
		ino=-ino;
	}

	while(ino>0)
	{
		idig=ino%10;

		printf("%d ",idig);

		for(i=1;i<idig;i++)
		{
			printf(" # ");
		}

		printf("\n");

		ino=ino/10;
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
