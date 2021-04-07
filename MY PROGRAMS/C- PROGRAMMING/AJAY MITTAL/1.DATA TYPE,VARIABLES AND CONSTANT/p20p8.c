/*	A program to add 2 no. entered by the user.	

	Input:	12 13
	Output:	25	*/




#include<stdio.h>

int Return(int ino1,int ino2)
{
	int iadd=0;

	iadd=ino1+ino2;

	return(iadd);
}

int main()
{
	int ino1=0,ino2=0,ino3=0;

	printf("\nEnter the 2 no.: \n");
	scanf("%d%d",&ino1,&ino2);

	ino3=ino1+ino2;

	printf("\nAddition is %d\n",ino3);

	ino3=Return(ino1,ino2);

	printf("\nAddition is %d\n",ino3);

	return(0);
}
