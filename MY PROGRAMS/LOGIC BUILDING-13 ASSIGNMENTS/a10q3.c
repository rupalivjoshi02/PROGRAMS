/* Write a program which accept distance in kilometre and convert it into meter. (1kilometre = 1000 Meter).

Input:5
Output:5000

Input:12
Output:12000

*/




#include<stdio.h>

double Meter(double dkilo)
{
	double dmet=0.0;

	dmet=dkilo*1000;

	return(dmet);
}

int main()
{
	double dvalue=0.0,dret=0.0;

	printf("Enter the Kilometer:");
	scanf("%lf",&dvalue);

	dret=Meter(dvalue);

	printf("Kilometer in meter %lf",dret);

	return(0);
}



