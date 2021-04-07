/*	1.Write a recursive program which display below pattern.
	
	Input:	6
	Output:	a b c d e f	*/




#include<stdio.h>

void DisplayR(int ino)
{
	static char c='a';
	static int i=0;

	if(ino<0)
	{
		ino=-ino;
	}

	if(i<ino)
	{
		printf("%c\t",c);

		c++;
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
