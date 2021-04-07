#include<stdio.h>

int Addition(int,int);
int Substraction(int,int);

int main()
{
	int x=10,y=5;
	int iret=0;
	int (*fp)(int,int);

	fp=Addition;

	iret=fp(x,y);

	printf("Addition is %d\n",iret);

	fp=Substraction;

	iret=fp(x,y);

	printf("Substraction is %d\n",iret);

	return(0);
}

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
