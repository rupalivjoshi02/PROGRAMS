/*	Illustrate the use of inline fun.	*/




#include<iostream>

using namespace std;

inline float Mul(float x,float y)
{
	return(x*y);
}

inline double Div(double p,double q)
{
	return(p/q);
}

int main()
{
	double a=12.345,b=9.82;

	cout<<"\n"<<Mul(a,b)<<"\n";
	cout<<"\n"<<Div(a,b)<<"\n";

	return(0);
}
