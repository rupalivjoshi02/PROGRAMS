/* Write a program which accept width & height of rectangle from user and calculate its area. (Area = Width * Height).

Input:wid=5.3,hgt=9.78
Output:51.834

*/




#include<stdio.h>

double Rectangle(double dwid,double dhgt)
{
	double area=0.0;

	area=dwid*dhgt;

	return(area);
}

int main()
{
	double dvalue1=0.0,dvalue2=0.0,dret=0.0;

	printf("Enter the width and hight:");
	scanf("%lf%lf",&dvalue1,&dvalue2);

	dret=Rectangle(dvalue1,dvalue2);

	printf("Area of the rectangle %lf",dret);

	return(0);
}


