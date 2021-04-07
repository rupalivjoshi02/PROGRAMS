/*	Generate all the strings of n bits.
	Assume A[0,1,---,n-1] is an array of size n.	*/




#include<stdio.h>

void Binary(int n)
{
	if(n<1)
	{
		printf("%s",A);
	}
	else
	{
		A[n-1]=0;
		
		Binary(n-1);

		A[n-1]=1;
	
		Binary(n-1);
	}
}

int main()
{
	int ivalue=5;

	Binary(5);

	return(0);
}

