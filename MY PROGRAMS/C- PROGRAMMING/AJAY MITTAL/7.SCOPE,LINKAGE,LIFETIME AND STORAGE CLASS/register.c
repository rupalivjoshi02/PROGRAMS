/* A program illustrating that it is not possible to complete the address of an object whose identifier is declare with a register storage class specifier. */


#include<stdio.h>

int main()
{
	register int a=200;

	printf("The value of a is %d\n",a);

	printf("The address of variable a is %p\n",&a);			//error
}




//Compilation error must take address of a memory location
