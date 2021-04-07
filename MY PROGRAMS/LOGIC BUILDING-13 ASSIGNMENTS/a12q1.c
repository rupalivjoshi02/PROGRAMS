/* Write a program which accept number from user and display below pattern.

Input:5
Output:* * * * * # # # # #

Input:6
Output:* * * * * * # # # # # #

Input:-5
Output:* * * * * # # # # #

Input:2
Output:* * # #

*/




#include<stdio.h>

void Pattern(int ino)
{
	int i=0;

	if(ino<0)
	{
		ino=-ino;
	}

	for(i=1;i<=ino*2;i++)
	{
		if(i<=ino)
		{
			printf("* ");
		}
		else
		{
			printf("# ");
		}
	}
}

int main()
{
	int ivalue=0;

	printf("Enter the no.:");
	scanf("%d",&ivalue);

	Pattern(ivalue);

	return(0);
}

