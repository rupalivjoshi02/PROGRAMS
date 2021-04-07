/* 	1.Design application for hotel. According to the management team of hotel they are giving discount on total bill amount of customer.If 		bill bill amount is less than 500 then there is no discount , if bill amount is less than 1500 and more than 500 they give 10% 		discount.And if the bill amount is more than 1500 then they give 15% discount.Our application should accept total bill amount and 		depends on the discount policy we have to return the amount after applying discount.

	Input : 1200     Output : 1080
	
	Input : 290      Output : 290
	
	Input : 3700     Output : 3145	*/




#include<stdio.h>

float Return(float famt)
{
	float fdis=0.0,ftotal=0.0;

	if(famt<500)
	{
		printf("No. discount");
	}
	else if((famt>=500) && (famt<1500))
	{
		fdis=(famt*10)/100;
	}
	else if(famt>=1500)
	{
		fdis=(famt*15)/100;
	}

	ftotal=famt-fdis;

	return(ftotal);
}

int main()
{
	float fvalue=0.0,fret=0.0;

	printf("\nEnter the amount: \n");
	scanf("%f",&fvalue);

	fret=Return(fvalue);

	printf("\nTotal amount is %f\n",fret);

	return(0);
}
