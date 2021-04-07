/* a program to illustarte the behaviour of equality operator in array. */


#include<stdio.h>

int main()
{
	int a[3]={10,20,30};
	int b[3]={10,20,30};

	if(a==b)
	{
		printf("Both are equal.");
	}
	else
	{
		printf("Both are not equal.");
	}

	return(0);
}
