/*	Find the gcd of the following  2 no..	*/





#include<stdio.h>

void Display(int m,int n)
{
	int i=0,gcd=0;

	for(i=1;((i<=m) && (i<=n));i++)
	{
		if(((m%i)==0) && ((n%i)==0))	
		{
			gcd=i;
		}
	}

	printf("\ngcd(%d,%d)=%d\n",m,n,gcd);
}

int main()
{
	int m=0,n=0;

	printf("\nEnter the values of m and n: \n");
	scanf("%d%d",&m,&n);

	Display(m,n);

	return(0);
}
