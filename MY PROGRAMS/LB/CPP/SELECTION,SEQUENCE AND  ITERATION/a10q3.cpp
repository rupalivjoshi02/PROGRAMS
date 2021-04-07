/* Write a program which accept distance in kilometre and convert it into meter. (1 kilometre = 1000 Meter)

Input:	5
Output:	5000

Input:	12
Output:	12000

*/




#include<iostream>

using namespace std;

class Conversion
{
	public:
		double Return(double);
};

double Conversion::Return(double ddkm)
{
	double ddm=0.0;

	ddm=ddkm*1000;

	return(ddm);
}

int main()
{
	double dvalue=0.0,dret=0.0;

	cout<<"Enter the distance in kilometer:";
	cin>>dvalue;

	Conversion cobj;

	dret=cobj.Return(dvalue);

	cout<<"Conversion of distance in kilometer into mater is "<<dret;

	return(0);
}
