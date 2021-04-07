//Write a program to interchange the content of 2 no. (swapping).
// Input :  ino1=1000 , ino2=250
// Output : ino1=250 , ino2=1000


#include<stdio.h>

void Fun(int ino1,int ino2)
{
	int temp=0;

	temp=ino1;
	ino1=ino2;
	ino2=temp;

	printf("ino1=%d",ino1);
	printf("ino2=%d",ino2);
}

int main()
{
	int ivalue1=0,ivalue2=0;

	printf("Enter the 1st and 2nd no.:");
	scanf("%d%d",&ivalue1,&ivalue2);

	Fun(ivalue1,ivalue2);

	return(0);
}


