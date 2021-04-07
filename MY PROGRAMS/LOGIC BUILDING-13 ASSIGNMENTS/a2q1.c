/* Accept one number from user and print that number of * on screen. */


#include<stdio.h>

void Star(int ino)
{
	int i=0;

	if(ino<0)
	{
		ino=-ino;
	}

	for(i=0;i<ino;i++)
	{
		printf("*");
	}
}

int main()
{
	int ivalue=0;

	printf("Enter the no.:");
	scanf("%d",&ivalue);

	Star(ivalue);

	return(0);
}
