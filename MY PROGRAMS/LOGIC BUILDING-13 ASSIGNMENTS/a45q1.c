/*	1.Write a recursive program which display below pattern.
	
	Input:	5
	Output:	* * * * *	*/




#include<stdio.h>

void DisplayR(int ino)
{
	static int i=1;

	if(ino<0)
	{
		ino=-ino;
	}

	if(i<=ino)
	{
		printf("*\t");

		i++;

		DisplayR(ino);
	}
}

int main()
{
	int ivalue=0;

	printf("\nEnter the no.: \n");
	scanf("%d",&ivalue);

	DisplayR(ivalue);

	return(0);
}
