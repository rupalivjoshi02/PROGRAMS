//Write a program to evaluate polynomial 3x^3-5x^2+6 for x=2.5.

#include<stdio.h>

void Polynomial(float x)
{
	float fpol=0.0;

	fpol=(3*x*x*x)-(5*x*x)+6;

	printf("%f",fpol);
}

int main()
{
	float fvalue=2.5;

	Polynomial(fvalue);

	return(0);
}
