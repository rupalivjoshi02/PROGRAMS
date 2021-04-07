/* A program that illustrate that the address-of operator on an object of enumeration type. */

#include<stdio.h> 

enum Switch{off,on};

int main()
{
	enum Switch s=on;

	printf("Address of an object of an enumeration switch s is %p\n",&s);
}
