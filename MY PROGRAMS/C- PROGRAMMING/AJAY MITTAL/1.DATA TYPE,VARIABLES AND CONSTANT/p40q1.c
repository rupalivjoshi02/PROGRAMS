/*	Convert the tempreture given in the fahreneit to celcius.	

	Input:	106
	Output:	41.11	*/




#include<stdio.h>
#include<math.h>

void Display(float ftemp)
{
	float fcel=0.0;

	fcel=(ftemp-32)*0.555556;

	printf("\nConversion of tempreture of fahreneit into celcius is %f\n",fcel);
}

int main()
{
	float fvalue=0.0,fret=0.0,fcel=0.0;

	printf("\nEnter the tempreture in fahreneit: \n");
	scanf("%f",&fvalue);

	fcel=(fvalue-32)*0.555556;

	printf("\nConversion of tempreture of fahreneit into celcius is %f\n",fcel);

	Display(fvalue);

	return(0);
}
