/* Write a program which accept number from user and return summation of all its non factors.

Input:12
Output:50

Input:13
Output:77

Input:10
Output:37

*/




#include<stdio.h>

int Summation(int ino)
{
	int i=0,isum=0;

	if(ino<0)
	{
		ino=-ino;
	}

	i=1;

	while(i<ino)
	{
		if((ino%i)!=0)
		{
			isum=isum+i;
		}
		
		i++;
	}

	return(isum);
}

int main()
{
	int ivalue=0,iret=0;

	printf("Enter the no.:");
	scanf("%d",&ivalue);

	iret=Summation(ivalue);

	printf("Summation of non factors of no. is %d",iret);

	return(0);
}
