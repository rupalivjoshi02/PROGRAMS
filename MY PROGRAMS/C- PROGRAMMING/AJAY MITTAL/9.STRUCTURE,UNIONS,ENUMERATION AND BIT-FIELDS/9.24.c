/* A program that illustrate the usage of passing the structure object by address/reference. */

#include<stdio.h>

struct Point
{
	int x,y;
};

Reflectpoint(struct Point*);

int main()
{
	struct Point p;

	printf("Enter the values of x and y:\n");	
	scanf("%d%d",&p.x,&p.y);

	Reflectpoint(&p);

	printf("Co-ordinates are (%d,%d)\n",p.x,p.y);
}

Reflectpoint(struct Point* p)
{
	int temp;

	temp=p->x;
	p->x=p->y;	
	p->y=temp;
}
