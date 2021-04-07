/* Write a program which accept number from user and check whether it contains 0 in it or not.

Input:2395
Output:NO

Input:1018
Output:YES

Input:9000
Output:YES

Input:10687
Output:YES

*/




#include<stdio.h>

#define YES 1
#define NO 0

typedef int BOOL;

BOOL Zero(int ino)
{
	int idig=0;

	if(ino<0)
	{
		ino=-ino;
	}

	while(ino>0)
	{
		idig=ino%10;

		if(idig==0)
		{
			break;
		}	

		ino=ino/10;
	}

	if(idig!=0)
	{
		return(NO);
	}	
	else
	{	
		return(YES);
	}
}

int main()
{
	int ivalue=0;
	BOOL bret=NO;

	printf("Enter the no.:");
	scanf("%d",&ivalue);

	bret=Zero(ivalue);

	if(bret==YES)
	{
		printf("No. contains 0.");
	}
	else
	{
		printf("No. does't contain 0.");
	}

	return(0);
}





