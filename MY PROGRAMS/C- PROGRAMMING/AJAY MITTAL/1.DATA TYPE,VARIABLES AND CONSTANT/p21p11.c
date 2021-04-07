/*	A program to find the size of various data types.	*/




#include<stdio.h>

void Display()
{
	printf("\nCharacter takes %d bytes in memory.\n",sizeof(char));
	printf("\nInteger takes %d bytes in memory.\n",sizeof(int));
	printf("\nFloat takes %d bytes in memory.\n",sizeof(float));
	printf("\nLong takes %d bytes in memory.\n",sizeof(long));
	printf("\nDouble takes %d bytes in memory.\n",sizeof(double));
}

int main()
{
	printf("\nCharacter takes %d bytes in memory.\n",sizeof(char));
	printf("\nInteger takes %d bytes in memory.\n",sizeof(int));
	printf("\nFloat takes %d bytes in memory.\n",sizeof(float));
	printf("\nLong takes %d bytes in memory.\n",sizeof(long));
	printf("\nDouble takes %d bytes in memory.\n",sizeof(double));

	Display();

	return(0);
}
