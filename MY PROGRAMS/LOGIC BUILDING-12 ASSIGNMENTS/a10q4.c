/* 4. Write a program which accept temperature in Fahrenheit and convert it into celsius. (1 celsius = (Fahrenheit -32) * (5/9))

Input:	10
Output:	-12.2222	(10 - 32) * (5/9)

Input:	34
Output:	1.11111	(34 - 32) * (5/9)	*/




#include<stdio.h>

double Return(float ftemp)
{
	float fcel=0.0;

	fcel=(ftemp-32)*0.555556;

	return(fcel);
}

int main()
{
	float fvalue=0.0;
	double dret=0.0;

	printf("\nEnter the tempreture in fahreniet:\n");
	scanf("%f",&fvalue);

	dret=Return(fvalue);

	printf("\nConvrsion of tempreture in fahreniet into celcius is %f\n",dret);	

	return(0);
}
