/* 1.Write a program which accept radius of circle from user and calculate its area. Consider value of PI as 3.14. (Area = PI * Radius * Radius)

Input:	5.3
Output:	88.2026

Input:	10.4
Output:	339.6224	*/




#include<stdio.h>

double Return(float frad)
{
	float pi=0.0,iar=0.0;

	pi=3.14;

	iar=pi*frad*frad;

	return(iar);
}

int main()
{
	float fvalue=0.0;
	double dret=0.0;

	printf("\nEnter the no.:\n");
	scanf("%f",&fvalue);

	dret=Return(fvalue);

	printf("\nArea of circle:%f\n",dret);

	return(0);	
}

