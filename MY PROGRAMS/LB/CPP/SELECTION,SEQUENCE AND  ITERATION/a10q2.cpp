/* Write a program which accept width & height of rectangle from user and calculate its area. (Area = Width * Height)

Input:	Width:5.3 
	Hieght:9.78
Output:	51.834

*/




#include<iostream>

using namespace std;

class RectangleArea
{
	public:
		double Return(double,double);
};

double RectangleArea::Return(double dwt,double dht)
{
	double dar=0.0;

	dar=dwt*dht;

	return(dar);
}

int main()
{
	double dvalue1=0.0,dvalue2=0.0,dret=0.0;

	cout<<"Enter the width and hieght of the rectangle:";
	cin>>dvalue1>>dvalue2;

	RectangleArea raobj;

	dret=raobj.Return(dvalue1,dvalue2);

	cout<<"Area of a rectangle is "<<dret;

	return(0);
}
