/* Write a program which accept range from user and display all even numbers in between that range.

Input:23 35
Output:23 24 26 28 30 32 34

Input:10 18
Output:10 12 14 16 18

Input:10 10
Output:10

Input:-10 2
Output:-10 -8 -6 -4 -2 0 2

Input:90 18
Output:Invalid range

*/




#include<stdio.h>

void Range(int ino1,int ino2)
{
	int i=0;

	if(ino1>ino2)
	{
		printf("Invalid range");
	}

	for(i=ino1;i<=ino2;i++)
	{
		if((i%2)==0)
		{
			printf("%d ",i);
		}
	}
}

int main()
{
	int ivalue1=0,ivalue2=0;

	printf("Enter the range:");
	scanf("%d%d",&ivalue1,&ivalue2);

	Range(ivalue1,ivalue2);

	return(0);
}



