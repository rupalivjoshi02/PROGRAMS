/*	1.Write a recursive program which display below pattern.

	Input:	5
	Output:	* * * * *	*/




#include<stdio.h>

void DisplayR()
{
	static int i=0;

	if(i<5)
	{
		printf("*\t");

		i++;

		DisplayR();
	}
}

int main()
{
	DisplayR();

	return(0);
}
