/* Write a program which accept two numbers and check whether numbers are equal or not.

Input:10 10
Output:Equal

Input:10 12
Output:Not equal

Input:10 -10
Output:Not equal

*/




#include<stdio.h>

#define YES 1
#define NO 0

typedef int BOOL;

BOOL Equal(int ino1,int ino2)
{
	if(ino1==ino2)
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
	int ivalue1=0,ivalue2=0;
	BOOL bret=NO;

	printf("Enter the 2 no.:");	
	scanf("%d%d",&ivalue1,&ivalue2);

	bret=Equal(ivalue1,ivalue2);

	if(bret==YES)
	{
		printf("No. are equal");
	}
	else
	{	
		printf("No. are not equal");
	}

	return(0);
}
