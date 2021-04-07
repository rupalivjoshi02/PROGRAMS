// Demo.c


#include<stdio.h>

extern int i;

//extern int j;	error

extern int k;

extern void Fun();

int main()
{
	printf("%d\n",i);

//	printf("%d\n",j);	error

	printf("%d\n",k);

	Fun();

	return(0);	
}
