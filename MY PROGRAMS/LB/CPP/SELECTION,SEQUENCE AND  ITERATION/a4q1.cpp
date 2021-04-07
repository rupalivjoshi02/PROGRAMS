/* Design application for hotel. According to the management team of hotel they are giving discount on total bill amount of customer. If bill bill amount is less than 500 then there is no discount , if bill amount is less than 1500 and more than 500 they give 10% discount. And if the bill amount is more than 1500 then they give 15% discount. Our application should accept total bill amount and depends on the discount policy we have to return the amount after applying discount.

Input:	1200
Output:	1080

Input:	290
Output:	290

Input:	3700
Output:	3145

*/




#include<iostream>

using namespace std;

class Bill
{
	public:
		float itotal=0.0,idis=0.0;

	public:
		float Return(float);
};

float Bill::Return(float iamt)
{
	if(iamt<500)
	{
		cout<<"There is no discount.";
	}
	else if((iamt>=500) && (iamt<1500))
	{
		idis=(iamt*10)/100;
		itotal=iamt-idis;
	}
	else if(iamt>=1500)
	{
		idis=(iamt*15)/100;
		itotal=iamt-idis;
	}

	return(itotal);
}

int main()
{
	float iret=0.0,ivalue=0.0;

	cout<<"Enter the bill ampount.";
	cin>>ivalue;

	Bill bobj;

	iret=bobj.Return(ivalue);

	cout<<"Total discount is Rs. "<<iret;

	return(0);
}


