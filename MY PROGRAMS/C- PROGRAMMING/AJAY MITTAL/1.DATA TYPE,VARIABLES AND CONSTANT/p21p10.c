/*	A program to swap 2 no.	without using a 3rd parameter.

	Input:	12 13
	Output:	13 12	*/




#include<stdio.h>

void Display(int ino1,int ino2)
{
	ino2=ino1+ino2;
	ino1=ino2-ino1;
	ino2=ino2-ino1;

	printf("\nNo. after swapping %d %d \n",ino1,ino2);
}

int main()
{
	int ino1=0,ino2=0;

	printf("\nEnter the 2 no.: \n");
	scanf("%d%d",&ino1,&ino2);

	printf("\nNo. before swapping %d %d \n",ino1,ino2);

	ino2=ino1+ino2;
	ino1=ino2-ino1;
	ino2=ino2-ino1;

	printf("\nNo. after swapping %d %d \n",ino1,ino2);

	printf("\nEnter the 2 no.: \n");
	scanf("%d%d",&ino1,&ino2);

	printf("\nNo. before swapping %d %d \n",ino1,ino2);

	Display(ino1,ino2);
	
	return(0);
}
