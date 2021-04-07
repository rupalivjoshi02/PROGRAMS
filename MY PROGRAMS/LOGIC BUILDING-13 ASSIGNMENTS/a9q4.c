/* Write a program which accepts N from user and print all odd numbers up to N.

Input:18
Output:1 3 5 7 9 11 13 15 17

*/




#include<stdio.h>

void Display(int ino)
{
	int i=0;

	if(ino<0)
	{
		ino=-ino;
	}

	for(i=1;i<ino;i++)
	{
		if((i%2)!=0)	
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

	Display(ivalue);

	return(0);
}
