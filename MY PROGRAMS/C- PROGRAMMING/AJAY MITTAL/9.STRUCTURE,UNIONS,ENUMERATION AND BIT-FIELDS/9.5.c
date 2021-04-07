/* A program that illustarte the use of a direct member access operator. */

#include<stdio.h>

struct Coord
{
	int x,y;
};

int main()
{
	struct Coord c1={4,5};
	const struct Coord c2={2,3};

	int tx=0,ty=0;

	printf("enter the values:");
	scanf("%d%d",&tx,&ty);

	printf("C1(%d,%d)\n",c1.x+tx,c1.y+ty);
	printf("C2(%d,%d)\n",c2.x+tx,c2.y+ty);

	return(0);
}
