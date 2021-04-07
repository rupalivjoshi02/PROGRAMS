//Write a program to reverse the no..


#include<stdio.h>

int Reverse(int ino)
{
	int irev=0,idig=0;

	if(ino<0)
	{
		ino=-ino;
	}

	while(ino>0)
	{
		idig=ino%10;
		irev=(irev*10)+idig;
		ino=ino/10;
	}

	return(irev);
}

int main()
{
	int ivalue=752;
	int iret=0;

	printf("Enter the no.:");
	scanf("%d",&ivalue);

	iret=Reverse(ivalue);

	printf("%d",iret);

	return(0);
}
