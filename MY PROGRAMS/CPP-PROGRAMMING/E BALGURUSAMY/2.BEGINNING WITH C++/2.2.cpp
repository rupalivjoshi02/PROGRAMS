/* Average of 2 no.. */


#include<iostream>

using namespace std;

int main()
{
	float  fvalue1=0.0,fvalue2=0.0,fsum=0.0,favg=0.0;

	cout<<"Enter 2 no.:\n";
	cin>>fvalue1>>fvalue2;

	fsum=fvalue1+fvalue2;
	favg=fsum/2;

	cout<<"Average="<<favg<<"\n";

	return(0);
}
