/* Write a program which returns difference between Even factorial and odd factorial of given number.

Input:5
Output:7 (8-15)

Input:-5
Output:-7 (8-15)

Input:10
Output:2895 (3840-945) 

*/




#include<stdio.h>

int Difference(int ino)
{
	int i=0,ifact1=1,ifact2=1;

	if(ino<0)
	{
		ino=-ino;
	}

	for(i=1;i<=ino;i++)
	{
		if((i%2)==0)
		{
			ifact1=ifact1*i;
		}
		else
		{
			ifact2=ifact2*i;
		}
	}

	return(ifact1-ifact2);
}

int main()
{
	int ivalue=0;
	int iret=0.0;

	printf("Enter the no.:");
	scanf("%d",&ivalue);

	iret=Difference(ivalue);

	printf("Difference is %d",iret);

	return(0);
}


