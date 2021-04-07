/* Visibility of an identifier */


#include<stdio.h>

int Fun(int a,int b);

// a and b are visible only within function prototype.

int c;

// c is visible from this point onwords till end of the file.It is visible in the main and Fun function.

int main()
{
	int d;

	// d is visible from this point till the end of main function.
}

int e;

// e is visible from this pt till the end of the file including the Fun function.It is not visible inside the main function.

int Fun(int f,int g)
{
	int h;

	//f ,g and h are visible only in the Fun function.
}
