/* A program that illustrate the declairation and use of the pointer to a structure type. */

#include<stdio.h>

struct Coord
{
	int x,y,z;
}p1={2,3,5},*ptr1;

int main()
{
	struct Coord p2={4,5,6};
	struct Coord *ptr2=&p2;

	ptr1=&p1;

	printf("Address of p1 & p2 are %p,%p\n",&p1,&p2);
	printf("Address of ptr1 & ptr2 are %p,%p\n",&ptr1,&ptr2);
	printf("ptr1 and ptr2 points to %p,%p\n",ptr1,ptr2);	
	printf("Size of struct coord %p\n",sizeof(struct Coord));
	printf("Size of struct coord* is %p\n",sizeof(struct Coord*));
	printf("Size of p1 & p2 are %p,%p\n",sizeof(p1),sizeof(p2));
	printf("Size of ptr1 & ptr2 are %p,%p\n",sizeof(ptr1),sizeof(ptr2));

	return(0);
}
