/* Write a program which accept number from user and return difference between summation of even digits and summation of odd digits.

Input:2395
Output:-15 (2-17)

Input:1018
Output:6 (8-2)

Input:8440
Output:16 (16-0)

Input:5733
Output:-18 (0-18)

*/




#include<stdio.h>

int Difference(int ino)
{
	int idig=0,isum1=0,isum2=0;

	if(ino<0)
	{
		ino=-ino;
	}

	while(ino>0)
	{
		idig=ino%10;

		if((idig%2)==0)
		{
			isum1=isum1+idig;
		}	
		else 
		{
			isum2=isum2+idig;
		}

		ino=ino/10;
	}

	return(isum1-isum2);
}

int main()
{
	int ivalue=0,iret=0;

	printf("Enter the no.:");
	scanf("%d",&ivalue);

	iret=Difference(ivalue);

	printf("Difference is %d",iret);

	return(0);
}




