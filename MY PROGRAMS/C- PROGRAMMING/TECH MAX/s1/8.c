//Write a program to accept any no. and find out whether it is -ve or +ve . If its -ve then make it +ve and print it.


#include<stdio.h>


void Fun(int ino)
{
	if(ino<0)
	{
		ino=-ino;
	}

	printf("%d",ino);
}

int main()
{
	int ivalue=0;

	printf("Enter the no.:");
	scanf("%d",&ivalue);

	Fun(ivalue);

	return(0);
}
