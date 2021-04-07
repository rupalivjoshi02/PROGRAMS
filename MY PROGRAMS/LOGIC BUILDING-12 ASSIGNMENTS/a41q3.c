/* Write a program which number from user and display below pattern.

Input:	7846
Output:	1 2 3 4 5 6 7 
	1 2 3 4 5 6 7 8
	1 2 3 4
	1 2 3 4 5 6

*/




#include<stdio.h>

void Display(int ino)
{
	int i=0,idig=0,irev=0,temp=0;

	if(ino<0)
	{	
		ino=-ino;
	}

	temp=ino;

	while(temp>0)
	{
		idig=temp%10;
		irev=(irev*10)+idig;
		temp=temp/10;
	}
	
	ino=irev;

	while(ino>0)
	{
		idig=ino%10;

		for(i=1;i<=idig;i++)
		{
			printf(" %d ",i);
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
