/* A program that illustarte that the usage and the implementation of the function gotoxy. */

#include<stdio.h>

int main()
{
	int row,col;

	clrscr();

	printf("Enter the rows and column:\n");
	scanf("%d%s",&row,&col);

	goto(row,col);

	printf("HEllo readers");
}
