/* A program that illustarte the use of the sizeof operator on an enumeration type and an enumeration object. */

#include<stdio.h>

enum Switch{off,on};

int main()
{
	enum Switch s=on;

	printf("Size of enumeration switch is %d bytes\n",sizeof(enum Switch));
	printf("Size of object of enumeration switch is %d bytes\n",sizeof(s));
}
