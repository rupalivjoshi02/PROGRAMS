/* Write a program which accept number from user and return difference between summation of all its factors and non factors.

Input:12
Output:-34 (16-50)

Input:13
Output:-76 (77-1)

Input:10
Output:-29 (8-37)

*/




#include<stdio.h>

int Difference(int ino)
{
	int i=0,isum1=0,isum2=0;

	if(ino<0)
	{
		ino=-ino;
	}

	for(i=1;i<ino;i++)
	{
		if((ino%i)==0)
		{
			isum1=isum1+i;
		}
		else if((ino%i)!=0)
		{
			isum2=isum2+i;
		}
	}

	return(isum1-isum2);
}

int main()
{
	int ivalue=0,iret=0;

	printf("Enter the no.:");
	scanf("%d",&ivalue);

	iret=Difference(ivalue);

	printf("Difference between factors and non factors of that no. is %d",iret);

	return(0);
}

