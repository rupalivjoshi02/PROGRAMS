/* Accept amount in US dollar and return its corresponding value in Indian currency. Consider 1$ as 70 rupees.

Input:10
Output:70

Input:3
Output:210

Input:1200
Output:84000

*/




#include<stdio.h>

double Rupay(double drs)
{
	double ddoll=0.0;

	ddoll=drs*70;

	return(ddoll);
}

int main()
{
	double dvalue=0.0;
	int iret=0.0;

	printf("Enter the dollar:");
	scanf("%lf",&dvalue);

	iret=Rupay(dvalue);

	printf("Dollars in rupees %d",iret);

	return(0);
}


