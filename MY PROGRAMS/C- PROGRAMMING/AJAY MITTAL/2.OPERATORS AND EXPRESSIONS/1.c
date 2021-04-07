/* Find 1's and 2's complement of the no. */




#include<stdio.h>

int main()
{
	int a=0,b=0,c=0;

	printf("Enter the no.:");
	scanf("%d",&a);

	b=~a;
	c=b+1;

	printf("1's complement is %d",b);
	printf("\n2's complement is %d",c);

	return(0);
}
