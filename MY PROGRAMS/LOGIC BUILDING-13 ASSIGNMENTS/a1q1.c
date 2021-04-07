/* Program to divide two numbers */


#include<stdio.h>

int Addition(int ino1,int ino2)
{
	int ians=0;

	ians=ino1+ino2;

	return(ians);
}

int main()
{
	int ivalue1=15,ivalue2=5;
	int iret=0;

	iret=Addition(ivalue1,ivalue2);

	printf("Addition is %d",iret);

	return(0);
}
