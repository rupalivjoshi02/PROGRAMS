/* Write a program which accept range from user and return addition of all even numbers in between that range. (Range should contains positive numbers only).

Input:23 30
Output:108

Input:10 18
Output:70

Input:-10 2
Output:Invalid range

Input:90 18
Output:Invalid range

*/




#include<stdio.h>

int Rangeevensum(int ino1,int ino2)
{
	int i=0,isum=0;

	if((ino1<0) || (ino2<0) || (ino1>ino2))
	{
		return(0);
	}

	for(i=ino1;i<=ino2;i++)
	{
		if((i%2)==0)
		{
			isum=isum+i;
		}
	}

	return(isum);
}

int main()
{
	int ivalue1=0,ivalue2=0,iret=0;

	printf("Enter the range:");
	scanf("%d%d",&ivalue1,&ivalue2);

	iret=Rangeevensum(ivalue1,ivalue2);

	printf("Summation of even no in rhe range is %d",iret);

	return(0);
}




