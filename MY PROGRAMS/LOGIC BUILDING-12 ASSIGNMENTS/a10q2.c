/* 2. Write a program which accept width & height of rectangle from user and calculate its area. (Area = Width * Height)

Input:	5.3 9.78
Output:	51.834	*/




#include<stdio.h>

double Return(float fwd,float fht)
{
	float far=0.0;

	far=fwd*fht;

	return(far);
}

int main()
{
	float fvalue1=0.0,fvalue2=0.0;
	double dret=0.0;

	printf("\nEnter the width and hieght:\n");
	scanf("%f%f",&fvalue1,&fvalue2);

	dret=Return(fvalue1,fvalue2);

	printf("\nArea of rectangle:%f\n",dret);	

	return(0);
}

