/* Write a program which accept range from user and return addition of all numbers in between that range. (Range should contains positive numbers only).

Input:23 30
Output:212

Input:10 18
Output:126

Input:-10 2
Output:Invalid range

Input:90 18
Output:Invalid range

*/




#include<stdio.h>

int Rangesum(int ino1,int ino2)
{
	int i=0,isum=0;

	if((ino1<0) || (ino2<0) || (ino1>ino2))
	{
		return(0);
	}

	for(i=ino1;i<=ino2;i++)
	{
		isum=isum+i;
	}

	return(isum);
}

int main()
{
	int ivalue1=0,ivalue2=0,iret=0;

	printf("Enter the range:");
	scanf("%d%d",&ivalue1,&ivalue2);

	iret=Rangesum(ivalue1,ivalue2);

	printf("Summation of range is %d",iret);

	return(0);
}

