/* Write a program which accept area in square feet and convert it into square meter. (1 square feet = 0.0929 Square meter)

Input:	5
Output:	0.4645

Input:	7
Output:	0.6503

*/




#include<iostream>

using namespace std;

class Conversion
{
	public:
		double Return(double);
};

double Conversion::Return(double dsqft)
{
	double dsqmt=0.0;

	dsqmt=dsqft*0.0929;

	return(dsqmt);
}

int main()
{
	double dvalue=0.0,dret=0.0;

	cout<<"Enter the area in square feet:";
	cin>>dvalue;

	Conversion cobj;

	dret=cobj.Return(dvalue);

	cout<<"Conversion of area in square feet into square meter is "<<dret;

	return(0);
}
