/* 	Write a program which accept number from user and print even factors of that number.

	Input:	36
	Output:	2 4 6 12 18 	*/




#include<stdio.h>

void Factor(int ino)
{
	int i=0;

	if(ino<0)
	{
		ino=-ino;
	}

	for(i=1;i<=ino/2;i++)
	{
		if(((ino%i)==0) && ((i%2)==0))
		{
			printf("%d ",i);
		}
	}
}

int main()
{
	int ivalue=0;

	printf("Enter the no.:");
	scanf("%d",&ivalue);

	Factor(ivalue);

	return(0);
}


