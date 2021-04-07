/* 5. Write a program which accept area in square feet and convert it into square meter. (1 square feet = 0.0929 Square meter)

Input:	5
Output:	0.464515

Input:	7
Output:	0.650321	*/




#include<stdio.h>

double Return(float ffet)
{
	float fmet=0.0;

	fmet=ffet*0.0929;

	return(fmet);
}

int main()
{
	float fvalue=0.0;
	double dret=0.0;

	printf("\nEnter the area in square feet: \n");
	scanf("%f",&fvalue);

	dret=Return(fvalue);

	printf("\nConvrsion of area in square feet into square meter is %f\n",dret);

	return(0);
}
