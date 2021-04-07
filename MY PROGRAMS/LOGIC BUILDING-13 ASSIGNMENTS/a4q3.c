/* Write a program which accept number from user and display all its non factors.

Input:12
Output:5 7 8 9 10 11

Input:13
Output:2 3 4 5 6 7 8 9 10 11 12

Input:10
Output:3 4 6 7 8 9

*/




#include<stdio.h>

void Nonfact(int ino)
{
	int i=0;

	if(ino<0)
	{
		ino=-ino;
	}

	for(i=1;i<ino;i++)
	{
		if((ino%i)!=0)
		{
			printf("%d ",i);	
		}
	}
}

int main()
{	
	int ivalue=0;

	printf("enter the no.:");
	scanf("%d",&ivalue);

	Nonfact(ivalue);

	return(0);
}
