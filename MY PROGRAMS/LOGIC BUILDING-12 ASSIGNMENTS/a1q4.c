// 4.Accept one number and check whether is is divisible by 5 or not.




#include<stdio.h>

#define YES 1
#define NO 0

typedef int BOOL;

BOOL Bool(int ino)
{
	if(ino<0)
	{
		ino=-ino;
	}

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

	printf("\nEnter the no.: \n");
	scanf("%d",&ivalue);

	bret=Bool(ivalue);

	if(bret==YES)
	{
		printf("\nThe no. is divisible by 5.\n");
	}
	else
	{
		printf("\nThe no. is not divisible by 5.\n");
	}

	return(0);
}

