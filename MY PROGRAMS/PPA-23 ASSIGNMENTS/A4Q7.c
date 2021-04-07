/* Check whether that no. is even r not.  */


#include<stdio.h>

int Chkeven(int);

int main()
{
	int ivalue=0;
	auto int iret=0;

	printf("enter the no.:");
	scanf("%d",&ivalue);

	iret=Chkeven(ivalue);

	if(iret==1)
	{
		printf("It is even no.");
	}
	else
	{
		printf("It is odd no.");
	}

	return(0);
}

int Chkeven(int ino)
{
	register int output=0;

	if((ino%2)==0)
	{
		output=1;
	}
	else
	{
		output=0;
	}

	return(output);
}
