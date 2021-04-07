/*	5.Accept one number from user and print that number of * on screen.	*/





#include<stdio.h>

void Display(int ino)
{
	int i=0;
	
	if(ino<0)
	{
		ino=-ino;
	}

	for(i=0;i<ino;i++)
	{
		printf("*\t");
	}
}

int main()
{
	int ivalue=5;

	Display(ivalue);

	return(0);
}
