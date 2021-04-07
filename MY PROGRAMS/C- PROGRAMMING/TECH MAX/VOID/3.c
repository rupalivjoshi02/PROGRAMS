//Write a program by using symbolic constnt.Taking a cube.

#include<stdio.h>

void Cube(int ino1,int ino2)
{
	int icube1=0,icube2=0;

	icube1=ino1*ino1*ino1;
	icube2=ino2*ino2*ino2;

	printf("ino1=%d\n",icube1);
	printf("ino2=%d\n",icube2);
}

int main()
{
	int ivalue1=1,ivalue2=3;

	Cube(ivalue1,ivalue2);

	return(0);
}
