/* Write a program which displays ASCII table. Table contains symbol, Decimal, Hexadecimal and Octal representation of every member from 0 to 255. */


#include<stdio.h>

void Display()
{
	int icnt=0;

	printf(" Character ASCII value ");

	for(icnt=0;icnt<128;icnt++)
	{
		printf("Decimal:%d , Octal:%o , Hexadecimal:%x\n\n",icnt,icnt,icnt);
	}
}

int main()
{
	Display();

	return(0);
}



