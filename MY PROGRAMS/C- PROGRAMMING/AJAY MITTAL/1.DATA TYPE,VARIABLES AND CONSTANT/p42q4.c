/*	Simple interest and maturity amount.	
	
	Input:	1000 7 2
	Output:	140.00,1140.00	*/




#include<stdio.h>
#include<math.h>

void Display(float p,float r,float t)
{
	float fsi=0.0,fma=0.0;

	fsi=(p*r*t)/100;
	fma=p+fsi;

	printf("\nSimple interest is %f\n",fsi);
	printf("\nMaturity amount is %f\n",fma);	
}

int main()
{
	float p=0.0,r=0.0,t=0.0,fsi=0.0,fma=0.0;

	printf("\nEnter the principle,rate of interest and time period: \n");
	scanf("%f%f%f",&p,&r,&t);

	fsi=(p*r*t)/100;
	fma=p+fsi;

	printf("\nSimple interest is %f\n",fsi);
	printf("\nMaturity amount is %f\n",fma);

	return(0);
}
