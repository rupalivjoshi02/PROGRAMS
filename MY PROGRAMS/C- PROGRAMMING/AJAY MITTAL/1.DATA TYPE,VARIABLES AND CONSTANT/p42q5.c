/*	Find the area of triangle whose sides are a,b and c.

	Input:	12 5 14
	Output:	29.23	

	USE COMMAND : gcc filename.c -o myexe -lm	*/




#include<stdio.h>
#include<math.h> 

double Return(float fa,float fb,float fc)
{
	float fs=0.0,far=0.0;

	fs=(fa+fb+fc)/2;
	far=sqrt(fs*(fs-fa)*(fs-fb)*(fs-fc));

	return(far);
}

int main()
{
	float fa=0.0,fb=0.0,fc=0.0;
	float fret=0.0;

	printf("\nEnter the 3 sides of triangle: \n");
	scanf("%f%f%f",&fa,&fb,&fc);

	fret=Return(fa,fb,fc);

	printf("\nArea of triangle is %f\n",fret);

	return(0);
}
