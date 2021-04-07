/* Write a program which accept temperature in Fahrenheit and convert it into celsius. (1 celsius = (Fahrenheit -32) * (5/9))

Input:	10
Output:	-12.2222

Input:	34
Output:	1.11111

*/




#include<iostream>

using namespace std;

class Conversion
{
	public:
		double Return(double);
};

double Conversion::Return(double dtf)
{
	double dtc=0.0;

	dtc=(dtf-32)*0.555555556;

	return(dtc);
}

int main()
{
	double dvalue=0.0,dret=0.0;

	cout<<"Enter the tempreture in fahreneit:";
	cin>>dvalue;

	Conversion cobj;

	dret=cobj.Return(dvalue);

	cout<<"Conversion of tempreture in fahreneit into celcius is "<<dret;

	return(0);
}
