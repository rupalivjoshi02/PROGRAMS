/* A program illustrating that extern storage class specifier can't be used in the parameter declaration either in the function definition or declaration. */


#include<stdio.h>

int Add(extern int a,extern int b)			//not allowed 
{
	return(a+b);
}

int main()
{
	int c=Add(2,3);

	printf("Addition is %d\n",c);
}


// Compilation error extern storage class is not allowed
