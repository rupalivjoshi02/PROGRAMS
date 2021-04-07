/* 	1.Write a program which accept name from user and print that name.

	Input:	Piyush Khairnar
	Output:	Piyush Khairnar		*/





#include<stdio.h>

int main()
{
	char Name[100]={'\0'};
	
	printf("\nEnter the name: \n");
	scanf("%[^\n]s",Name);

	printf("\nYour name is %s\n",Name);

	return(0);
}
