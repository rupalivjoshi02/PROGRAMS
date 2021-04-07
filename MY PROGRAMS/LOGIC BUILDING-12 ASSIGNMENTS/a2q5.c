// 5.Accept number from user and check whether number is even or odd.




#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Bool(int ino)
{
	if((ino%2)==0)
	{
		return(TRUE);
	}
	else
	{
		return(FALSE);
	}
}

int main()
{
	int ivalue=0;
	BOOL bret=FALSE;

	printf("\nEnter the no.: \n");
	scanf("%d",&ivalue);

	bret=Bool(ivalue);

	if(bret==TRUE)
	{
		printf("\nThe given no. is even. \n");
	}
	else
	{
		printf("\nThe given no. is odd. \n");
	}

	return(0);
}
