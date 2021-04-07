//Demo.c


#include<stdio.h>	//preprocessor directives

extern int i;	//variable declaration

extern void Fun();	//function declaration

int main()	//entry point function
{
	printf("Inside main\n");
	printf("%d\n",i);

	Fun();

	return(0);
}


