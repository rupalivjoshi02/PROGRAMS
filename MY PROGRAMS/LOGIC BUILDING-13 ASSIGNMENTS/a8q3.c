/* Write a program to find factorial of given number.

Input:5
Output:120

Input:-5
Output:120

Input:4
Output:24

*/




#include<stdio.h>

int Factorial(int ino)
{
	int ifact=1,i=0;

	if(ino<0)
	{
		ino=-ino;
	}

	for(i=1;i<=ino;i++)
	{
		ifact=ifact*i;
	}	

	return(ifact);
}

int main()
{
	int ivalue=0,iret=0;

	printf("Enter the no.:");
	scanf("%d",&ivalue);

	iret=Factorial(ivalue);

	printf("Factorial is %d",iret);

	return(0);
}
