/*	The velocity of an object is given in km/hr.Write a C program to convert the given velocity from km/hr to m/sec.

	Input:	12
	Output:	3.333333	*/




#include<stdio.h>
#include<math.h>

void Display(float fvkm)
{
	float fvm=0.0;

	fvm=fvkm*(0.277778);

	printf("\nConversion of velocity in km/hr into m/sec is %f\n",fvm);
}

int main()
{
	float fvkm=0.0,fvm=0.0;

	printf("\nEnter the velocity in km/hr: \n");
	scanf("%f",&fvkm);

	fvm=fvkm*(0.277778);

	printf("\nConversion of velocity in km/hr into m/sec is %f\n",fvm);

	Display(fvkm);

	return(0);
}
