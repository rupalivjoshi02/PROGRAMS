/* Accept number from user and check whether number is even or odd. */


#include<stdio.h>

#define YES 1
#define NO 0

typedef int BOOL;

BOOL Check(int ino)
{
	if((ino%2)==0)
	{
		return(YES);
	}
	else
	{
		return(NO);
	}
}

int main()
{	
	int ivalue=0;
	BOOL bret=NO;

	printf("Enter the no.:");
	scanf("%d",&ivalue);

	bret=Check(ivalue);

	if(bret==YES)
	{
		printf("No. is even");
	}
	else
	{
		printf("No. is odd");
	}

	return(0);
}
