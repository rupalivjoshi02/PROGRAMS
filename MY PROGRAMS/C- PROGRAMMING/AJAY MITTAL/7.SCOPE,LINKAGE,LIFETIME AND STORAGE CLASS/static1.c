/* A program illustrating that a static storage class specifier can't be used in the parameter declaration either in the function declaration or int the function definition. */


#include<stdio.h>

int Add(static int a,static int b)			//not allowed
{
	return(a+b);	
}

int main()
{
	int c=Add(2,3);

	printf("the value of c is %d\n",c);
}



//Compilation error storage class static is not allowed.
