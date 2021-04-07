/* a program that illustarte the use of typedef storage class specifier. */


#include<stdio.h>

int main()
{
	typedef char* cp;

	cp c;

	printf("the size of character ptr is %d\n",sizeof(c));
}
