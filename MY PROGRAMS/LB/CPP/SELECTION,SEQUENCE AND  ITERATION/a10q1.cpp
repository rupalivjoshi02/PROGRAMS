/* Write a program which accept radius of circle from user and calculate its area. Consider value of PI as 3.14. (Area = PI * Radius * Radius)

Input:	5.3 
Output:	88.2026

Input:	10.4 
Output:	339.6224

*/




#include<iostream>

#define PI 3.14

using namespace std;

class CircleArea
{
	public:
		double Return(double);
};

double CircleArea::Return(double drad)
{
	double dar=0.0;

	dar=PI*drad*drad;

	return(dar);
}

int main()
{
	double dvalue=0.0,dret=0.0;

	cout<<"Enter the radius of the circle:";
	cin>>dvalue;

	CircleArea caobj;

	dret=caobj.Return(dvalue);

	cout<<"Area of a circle is "<<dret;

	return(0);
}
