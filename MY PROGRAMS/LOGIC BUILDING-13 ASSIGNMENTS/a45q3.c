/*	1.Write a recursive program which display below pattern.
	
	Input:	5
	Output:	5 4 3 2 1	*/




#include<stdio.h>

void DisplayR(int ino)
{
	if(ino<=0)
	{
		return;
	}
	else
	{
		printf("%d\t",ino);

		DisplayR(ino-1);
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
