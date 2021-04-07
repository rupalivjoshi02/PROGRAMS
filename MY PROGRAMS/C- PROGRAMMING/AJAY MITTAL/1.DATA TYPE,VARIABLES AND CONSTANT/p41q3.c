/*	Find the average of 3 no..	

	Input:	12 11 14
	Output:	12.33	*/




#include<stdio.h>

void Display(float fno1,float fno2,float fno3)
{
	float ftot=0.0,favg=0.0;

	ftot=fno1+fno2+fno3;
	favg=ftot/3;

	printf("\nAverage of 3 no. is %f\n",favg);
}

int main()
{
	float fno1=0,fno2=0,fno3=0,ftot=0;
	float favg=0.0;

	printf("\nEnter the 3 no.: \n");
	scanf("%f%f%f",&fno1,&fno2,&fno3);

	ftot=fno1+fno2+fno3;
	favg=ftot/3;

	printf("\nAverage of 3 no. is %f\n",favg);

	Display(fno1,fno2,fno3);

	return(0);
}
