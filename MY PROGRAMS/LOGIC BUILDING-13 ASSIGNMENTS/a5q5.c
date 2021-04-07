/* Write a program which accept total marks & obtained marks from user and calculate percentage.

Input:1000 745
Output:74.5%

*/




#include<stdio.h>

float Percentage(float itot,float iobt)
{
	float iper=0.0;

	iper=(iobt/itot)*100;

	return(iper);
}

int main()
{
	float ivalue1=0,ivalue2=0,fret=0;

	printf("Enter total and obtained marks:");
	scanf("%f%f",&ivalue1,&ivalue2);

	fret=Percentage(ivalue1,ivalue2);

	printf("Percentage is %f",fret);

	return(0);
}
