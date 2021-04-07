/* A program illustrating that auto storage class specifier can't be used in the declaration made in the global scope. */


#include<stdio.h>

auto int a;			//not allowed

int main()
{
	printf("Enter the value of a:");
	scanf("%d",&a);

	printf("The entered value of a is %d\n",a);
}


// compilation error storage class auto is not allowed outside any function.
