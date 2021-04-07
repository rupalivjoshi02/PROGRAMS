/* Write a program to find odd factorial of given number.

Input:5
Output:15 (5*3*1)

Input:-5
Output:15 (5*3*1)

Input:10
Output:945 (9*7*5*3*1) 

*/




#include<stdio.h>

int Oddfact(int ino)
{
	int i=0,ifact=1;

	if(ino<0)
	{
		ino=-ino;
	}

	for(i=1;i<=ino;i++)
	{
		if((i%2)!=0)
		{
			ifact=ifact*i;
		}
	}

	return(ifact);
}

int main()
{
	int ivalue=0;
	int iret=0.0;

	printf("Enter the no.:");
	scanf("%d",&ivalue);

	iret=Oddfact(ivalue);

	printf("factorisation of odd no. is %d",iret);

	return(0);
}


