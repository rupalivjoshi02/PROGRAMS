/* A program illustrating that an extern variable can't be initialised if the declaration is done int the block or local scope. */


#include<stdio.h>

int main()
{
	extern int a=200;

	printf("The value of a is %d\n",a);
}


//Compilation error extern variable can't be initialized in main function.Undefined symbol a in main function.
