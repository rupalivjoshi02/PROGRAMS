/*	A year approximately consist of 3.156*10^7 seconds.Write a C program that accepts your age in years and convert it into equivalent no. 		of seconds.

	Input:	18
	Output:	568080000 seconds	*/




#include<stdio.h>
#include<math.h>

void Display(float fay)
{
	float fas=0.0;

	fas=3.156E7*fay;

	printf("\nYour age in seconds is %f Seconds.\n",fas);
}

int main()
{
	float fay=0.0,fas=0.0;

	printf("\nEnter your age in years: \n");
	scanf("%f",&fay);

	fas=3.156E7*fay;

	printf("\nYour age in seconds is %f Seconds.\n",fas);

	Display(fay);
	
	return(0);
}
