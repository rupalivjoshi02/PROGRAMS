/* Write a program which accept total marks & obtained marks from user and calculate percentage.

Input:	1000 745
Output:	74.5%

*/




#include<iostream>

using namespace std;

class Percentage
{
	public:
		float Return(float,float);
};

float Percentage::Return(float ftot,float iobt)
{
	float fper=0.0;

	fper=(iobt*100)/ftot;

	return(fper);
}

int main()
{
	 float fret=0.0,ivalue1=0.0,ivalue2=0.0;

	cout<<"Enter the total and obtained marks of student:";
	cin>>ivalue1>>ivalue2;

	Percentage pobj;

	fret=pobj.Return(ivalue1,ivalue2);

	cout<<"Percentage of a student is "<<fret<<"%";

	return(0);
}
