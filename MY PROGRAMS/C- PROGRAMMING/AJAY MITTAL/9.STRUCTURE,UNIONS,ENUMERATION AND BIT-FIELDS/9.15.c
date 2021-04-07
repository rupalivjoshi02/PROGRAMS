/* A program that illustarte the structure member access via structure pointer. */

#include<stdio.h>

struct Coord
{
	int x,y;
};

int main()
{
	struct Coord c={2,3};
	struct Coord *p=&c;

	printf("Co-ordinates of c are (%d,%d)\n",(*p).x,(*p).y);
	printf("Co-ordinates of c are (%d,%d)\n",p->x,p->y);

	return(0);
}
