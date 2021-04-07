/* A program to find average marks secured by students. */


#include<stdio.h>

void Average()
{
	int m1=10,m2=12,m3=9,m4=11,m5=17;
	float isum=0.0,fave=0.0;

	isum=m1+m2+m3+m4+m5;

	fave=isum/5;

	printf("Avrage is %f",fave);
}

int main()
{
	Average();

	return(0);
}
