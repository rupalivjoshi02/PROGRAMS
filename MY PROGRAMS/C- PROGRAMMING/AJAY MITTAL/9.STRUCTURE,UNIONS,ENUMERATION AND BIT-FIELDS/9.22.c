/* A program that illustarte the usage of passing a structure object by value. */

#include<stdio.h>

struct Point
{
	int x,y;
};

Reflectpoint(struct Point);

int main()
{
	struct Point p;

	printf("Enter the value of x and y:\n");
	scanf("%d%d",&p.x,&p.y);

	Reflectpoint(p);

	printf("The x and y co-ordinates are (%d,%d)",p.x,p.y);
}

Reflectpoint(struct Point p)
{
	int temp;

	temp=p.x;
	p.x=p.y;
	p.y=temp;
}
