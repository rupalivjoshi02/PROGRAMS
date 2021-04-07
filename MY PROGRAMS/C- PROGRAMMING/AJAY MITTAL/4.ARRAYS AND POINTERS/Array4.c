/* A program to illustarte that a ptr to a type can't be assigned address of an object of another type. */


#include<stdio.h>

int main()
{
	int ino=10;
	float *p=ino; //not allowed
	
	printf("The value of ino is %d\n",ino);
	printf("Ptr holds %p\n",p);

	return(0);
}
