/* write a program to read the values of a,b and c and display the value of x,where x=a/b-c.

Input:	a=250,b=85,c=25
Output:	-22.0588

Input:	a=300,b=70,c=70
Output:	-65.7143*/




#include<iostream>

using namespace std;

class Sum
{
	public:
		void Display(float,float,float);
};

void Sum::Display(float a,float b,float c)
{
	float x=0.0;

	x=(a/b)-c;

	cout<<"x="<<x;
}

int main()
{
	float fvalue1=0.0,fvalue2=0.0,fvalue3=0.0;

	cout<<"Enter the 3 values:";
	cin>>fvalue1>>fvalue2>>fvalue3;

	Sum sobj;

	sobj.Display(fvalue1,fvalue2,fvalue3);

	return(0);
}
