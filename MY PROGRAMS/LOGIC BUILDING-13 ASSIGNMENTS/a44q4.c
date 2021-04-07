/*	1.Write a recursive program which display below pattern.

	Output:	A B C D E F	*/




#include<stdio.h>

void DisplayR()
{
	static char c='A';

	if(c<='F')
	{
		printf("%c\t",c);

		c++;

		DisplayR();
	}
}

int main()
{
	DisplayR();

	return(0);
}
