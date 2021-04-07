/*	Write a program which is used to perform addition and substraction of 2 no..	

	PROCEDURAL APPROACH	*/




#include<stdio.h>

int Addition(int ino1,int ino2)
{
	int ians=0;

	ians=ino1+ino2;

	return(ians);
}

int Substraction(int ino1,int ino2)
{
	int ians=0;

	ians=ino1-ino2;
	
	return(ians);
}

int main()
{
	int ivalue1=0,ivalue2=0,iret=0;

	printf("\nEnter the 2 no.: \n");
	scanf("%d%d",&ivalue1,&ivalue2);

	iret=Addition(ivalue1,ivalue2);

	printf("\nAddition is %d\n",iret);

	iret=Substraction(ivalue1,ivalue2);

	printf("\nSubstraction is %d\n",iret);

	return(0);
}


