/* Write a program which accept temperature in Fahrenheit and convert it into celsius. (1 celsius = (Fahrenheit -32) * (5/9))

Input:10
Output:-12.2222

Input:34
Output:1.11111

*/




#include<stdio.h>

double Celcius(double dfar)
{
	double dcel=0.0;
	
	dcel=(dfar-32)*0.555555556;

	return(dcel);
}

int main()
{
	double dvalue=0.0,dret=0.0;

	printf("Enter the Kilometer:");
	scanf("%lf",&dvalue);

	dret=Celcius(dvalue);

	printf("Fahrenheit in celcius %lf",dret);

	return(0);
}

