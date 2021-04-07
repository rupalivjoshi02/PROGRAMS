//Write a program to find out greatest no. out of 2 no. 		

#include<stdio.h>

int Greatest(int ino1,int ino2)
{
	if(ino1<ino2)
	{
		return(ino2);
	}
	else
	{
		return(ino1);
	}
}

int main()
{
	int ivalue1=4,ivalue2=8;
	int iret=0;

	iret=Greatest(ivalue1,ivalue2);

	printf("Greatest no. is %d",iret);

	return(0);
}
