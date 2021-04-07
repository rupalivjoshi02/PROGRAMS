/* Write a program which accept radius of circle from user and calculate its area. Consider value of PI as 3.14. (Area = PI * Radius * Radius)

Input:5.3
Output:88.2026

Input:10.4
Output:339.6224

*/




#include<stdio.h>

double Circle(double irad)
{
	float area=0.0,pi=0.0;
	
	pi=3.14;

	area=pi*irad*irad;

	return(area);
}

int main()
{
	double dvalue=0.0,dret=0.0;

	printf("Enter the radius:");
	scanf("%lf",&dvalue);

	dret=Circle(dvalue);

	printf("Area of the circle %lf",dret);

	return(0);
}

