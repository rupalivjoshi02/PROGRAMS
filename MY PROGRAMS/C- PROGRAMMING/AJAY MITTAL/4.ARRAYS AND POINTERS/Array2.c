/* A program to illustrate that an array cant be assign to another array in 1 step. */


#include<stdio.h>

int main()
{
	//int a[3],b[3]={10,20,30};	//error

	printf("Assigning an array to another an array\n");

	a=b;

	printf("Elements of an array are: ");
	printf("%d %d %d\n",a[0],a[1],a[2]);

	return(0);
}


// Compilation error l-value reqired in main function.
