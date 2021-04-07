/* Write a program which accept number from user and display its factors in decreasing order.

Input:12
Output:6 4 3 2 1

Input:13
Output:1

Input:10
Output:5 2 1

*/




#include<stdio.h>

void Display(int ino)
{
	int i=0;
	
	if(ino<0)
	{
		ino=-ino;	
	}

	i=ino/2;

	while(i>0)
	{
		if((ino%i)==0)
		{
			printf("%d ",i);
		}

		i--;
	}
}

int main()
{	
	int ivalue=0;

	printf("enter the no.:");
	scanf("%d",&ivalue);

	Display(ivalue);

	return(0);
}

