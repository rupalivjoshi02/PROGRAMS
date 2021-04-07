/* Write a c++ program that will ask for a tempreture in fahreneit and display it in celsius */




#include<iostream>

using namespace std;

class Conversion
{
	/*
		public:
			float c=0.0;
	*/

	public:
		void Celsius(float f)
		{
			float c=0.0;

			c=(f-32)*0.555555556;

			cout<<"Conversion of tempretute in fahreneit into celsius is "<<c;
		}
};

int main()
{
	float fvalue=0.0;
		
	cout<<"Enter the tempreture:\n";
	cin>>fvalue;

	Conversion cobj;

	cobj.Celsius(fvalue);

	return(0);
}
