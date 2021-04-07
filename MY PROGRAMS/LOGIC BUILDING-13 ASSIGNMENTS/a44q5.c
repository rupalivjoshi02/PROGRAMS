/*	1.Write a recursive program which display below pattern.

	Output:	a b c d e f	*/




#include<stdio.h>

void DisplayR()
{
	static char c='a';

	if(c<='f')
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
