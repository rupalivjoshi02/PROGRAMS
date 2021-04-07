/* A program that illustrate the value of an enemeration object can't ne printed in the symbolic form. */

#include<stdio.h>

int main()
{
	enum Boolean{false,true}var;

	var=true;

	printf("The value of var is %d\n",var);
} 
