/* Design application for hotel. According to the management team of hotel they are giving discount on total bill amount of customer. If bill bill amount is less than 500 then there is no discount , if bill amount is less than 1500 and more than 500 they give 10% discount. And if the bill amount is more than 1500 then they give 15% discount. Our application should accept total bill amount and depends on the discount policy we have to return the amount after applying discount.

Input : 1200	Output : 1080

Input : 290	Output : 290

Input : 3700	Output : 3145

*/




#include<stdio.h>

float Bill(int iamt)
{
	float fdisc=0.0,ftot=0.0;

	if(iamt<500)
	{
		return(iamt);
	}

	if((iamt>=500) && (iamt<1500))
	{
		fdisc=(iamt*10)/100;
	}
	else if(iamt>=1500)
	{
		fdisc=(iamt*15)/100;
	}

	ftot=iamt-fdisc;

	return(ftot);
}

int main()
{
	int ivalue=0;
	float fret=0.0;

	printf("Enter the amount:");	
	scanf("%d",&ivalue);

	fret=Bill(ivalue);

	printf("Discount is %f",fret);

	return(0);
}



