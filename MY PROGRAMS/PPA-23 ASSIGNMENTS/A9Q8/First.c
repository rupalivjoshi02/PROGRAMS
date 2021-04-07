/* 8. Write C program which divided in two files as First.c and Second.c.First.c file contains main function and Second.c file contains Add function.Add function accept two integers and return addition of that two integers.From First.c we have to call the Add function which is inside Second.c file.*/


// First.c

#include<stdio.h>

int Addition(int,int);

int main()
{
	int ivalue1=0,ivalue2=0,iret=0;

	printf("Enter 2 no.:");
	scanf("%d%d",&ivalue1,&ivalue2);

	iret=Addition(ivalue1,ivalue2);

	printf("Addition is %d\n",iret);

	return(0);
}



