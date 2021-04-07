/* Write a program which accept area in square feet and convert it into square meter. (1 square feet = 0.0929 Square meter).

Input:5
Output:0.464515

Input:7
Output:0.650321

*/




#include<stdio.h>

double Squaremeter(double dsqft)
{
	double dsqmt=0.0;

	dsqmt=dsqft*0.0929;

	return(dsqmt);
}

int main()
{
	double dvalue=0.0,dret=0.0;

	printf("Enter the square feet:");
	scanf("%lf",&dvalue);

	dret=Squaremeter(dvalue);

	printf("square feet in square meter %lf",dret);

	return(0);
}

