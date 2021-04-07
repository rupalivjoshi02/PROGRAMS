//Write a program to accept distannce in unit cm and convert it into feet and inches.(1 feet=30cm,1 inch=1.25cm).

#include<stdio.h>

void Fun(float ino)
{
	float ifeet=0,inch=0;

	ifeet=ino/30;
	inch=ino/1.25;

	printf("\nDistance in feet %f",ifeet);
	printf("\nDistance in inches %f",inch);
}

int main()
{
	float ivalue=0;

	printf("Enter the no.:");
	scanf("%f",&ivalue);

	Fun(ivalue);

	return(0);
}
