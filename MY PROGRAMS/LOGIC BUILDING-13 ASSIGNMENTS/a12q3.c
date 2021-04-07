/* Write a program to find even factorial of given number.

Input:5
Output:8 (4*2)

Input:-5
Output:8 (4*2)

Input:10
Output:3840 (10*8*6*4*2) 

*/




#include<stdio.h>

int Evenfact(int ino)
{
	int i=0,ifact=1;

	if(ino<0)
	{
		ino=-ino;
	}

	for(i=1;i<=ino;i++)
	{
		if((i%2)==0)
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

	iret=Evenfact(ivalue);

	printf("factorisation of even no. is %d",iret);

	return(0);
}


