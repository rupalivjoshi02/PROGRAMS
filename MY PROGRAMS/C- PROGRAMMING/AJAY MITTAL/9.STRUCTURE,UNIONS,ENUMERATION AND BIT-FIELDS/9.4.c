/* A program that illustarte the declairation of a structure object with a static storage class specifier. */

#include<stdio.h>

struct Point
{
	int x;
	int y;
};

int main()
{
	struct Point p1;
	static struct Point p2;

	p1.x=10;
	p1.y=20;
	
	p2.x=30;
	p2.y=40;

	printf("The co=ordinated of p1 are %d %d\n",p1.x,p1.y);
	printf("The co=ordinated of p2 are %d %d\n",p2.x,p2.y);

	return(0);
}
