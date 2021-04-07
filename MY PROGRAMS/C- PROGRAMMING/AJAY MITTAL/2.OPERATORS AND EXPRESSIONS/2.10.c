/* a program that illustrate the logical AND operation. */

#include<stdio.h>

int main()
{
	int i=1,j=2;
	int k=0,l=0;

	l=k&&i++&&j++;
	
	printf("i=%d\nj=%d\nk=%d\nl=%d",i,j,k,l);

	return(0);
}
