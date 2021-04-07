/* 	3.Write a program which accept two numbers and check whether numbers are equal or not.

	Input:	10 10
	Output:	Equal

	Input:	10 12
	Output:	Not Equal

	Input:	10 -10
	Output:	Not Equal	*/





#include<stdio.h>

#define YES 1
#define NO 0

typedef int BOOL;

BOOL Bool1(int ino1,int ino2)
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

	printf("\nEnter the 2 no.: \n");
	scanf("%d%d",&ivalue1,&ivalue2);

	bret=Bool1(ivalue1,ivalue2);

	if(bret==YES)
	{
		printf("\nBoth no. are equal.\n");
	}
	else	
	{
		printf("\nBoth no. are not equal.\n");
	}	

	return(0);
}
