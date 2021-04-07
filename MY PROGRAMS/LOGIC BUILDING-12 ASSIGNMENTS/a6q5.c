/* 	5.Write a program which accept total marks & obtained marks from user and calculate percentage.

	Input:	1000	745
	Output:	74.5%	*/





#include<stdio.h>

float Return1(float itotal,float iobt)
{
	float iper=0.0;
	
	iper=(iobt*100)/itotal;

	return(iper);
}

int main()
{
	float fvalue1=0.0,fvalue2=0.0,fret=0.0;
	
	printf("\nEnter the total and obtained marks: \n");
	scanf("%f%f",&fvalue1,&fvalue2);

	fret=Return1(fvalue1,fvalue2);

	printf("\nPercentage is %f\n",fret);

	return(0);
}


