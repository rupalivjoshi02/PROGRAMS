#include<stdio.h>
#include<stdlib.h>

int Add(int,int);

int main()
{
	int x=0,y=0,ans=0;

	printf("Enter the 1st and 2nd no.:");
	scanf("%d%d",&x,&y);

	ans=Add(x,y);

	printf("addition is %d",ans);

	return(0);
}

int Add(int ino1,int ino2)
{
	int iret=0;

	iret=ino1+ino2;

	return(iret);
}
