/* Write a program which accept one number from user and print that number of even numbers on screen.

Input:7
Output:2 4 6 8 10 12 14

*/


#include<stdio.h>

void Even(int ino)
{
	int i=0,imult=0;

	if(ino<0)
	{
		ino=-ino;
	}

	for(i=1;i<=ino;i++)
	{
		imult=2*i;

		printf("%d ",imult);
	}
}

int main()
{
	int ivalue=0;

	printf("Enter the no.:");
	scanf("%d",&ivalue);

	Even(ivalue);

	return(0);
}


