/* Accept one number and check whether is is divisible by 5 or not. */


#include<stdio.h>

#define YES 1
#define NO 0

typedef int BOOL;

BOOL Divide(int ino)
{
	if((ino%5)==0)
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

	bret=Divide(ivalue);

	if(bret==YES)
	{
		printf("No. is divided by 5.");
	}
	else
	{
		printf("No. is not divided by 5.");
	}

	return(0);
}

