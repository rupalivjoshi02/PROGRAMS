/* A program to illustarte the outcome of an expression that uses lesser subscripts from dimensions. */


#include<stdio.h>

int main()
{
	int a[2][2]={2,1,3,4};

	printf("No subscript used:\n");

	printf("%d\n",a);

	printf("One subscript used:\n");

	printf("%d %d\n",a[0],a[1]);

	printf("Two subscript used:\n");

	printf("%d %d\n",a[0][0],a[0][1]);
	printf("%d %d\n",a[1][0],a[1][1]);

	return(0);
}
