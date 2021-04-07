// 1.Program to divide two numbers.




#include<stdio.h>

int Return(int ino1,int ino2)
{
	int ians=0;
		
	if(ino2==0)
	{
		return(-1);
	}

	ians=ino1/ino2;

	return(ians);
}

int main()
{
	int ivalue1=0,ivalue2=0,iret=0;

	printf("\nEnter 2 no.: \n");
	scanf("%d%d",&ivalue1,&ivalue2);

	iret=Return(ivalue1,ivalue2);

	printf("\nDivisin is %d \n",iret);

	return(0);
}

