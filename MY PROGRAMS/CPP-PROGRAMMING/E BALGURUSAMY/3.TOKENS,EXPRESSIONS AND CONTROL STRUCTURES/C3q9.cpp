/*	Write a program to calculate the variance and standard deviation of N no.	*/





#include<iostream>
#include<cmath>
#include<cstdlib>

using namespace std;

class Statistics
{
	public:
		void Display()
		{
			float arr[10]={10.3,5,6.3,9.5,4.6,88,23,6,98,1.2}; 
			float fsum=0.0,fmean=0.0,fsub=0.0,fsq=0.0,fsum1=0.0,fvar=0.0,fsd=0.0;

			for(int i=0;i<10;i++)
			{
				fsum=fsum+arr[i];
			}

			fmean=fsum/10;

			for(int i=0;i<10;i++)
			{
				fsub=arr[i]-fmean;
				fsq=fsub*fsub;
				fsum1=fsum1+fsq;

				fsub=0;
				fsq=0;
			}

			fvar=fsum1/10;
			fsd=sqrt(fvar);

			cout<<"\nVariance: "<<fvar;
			cout<<"\nStandard Deviation: "<<fsd;
		}
};

int main()
{
	Statistics sobj;

	sobj.Display();

	return(0);
}
