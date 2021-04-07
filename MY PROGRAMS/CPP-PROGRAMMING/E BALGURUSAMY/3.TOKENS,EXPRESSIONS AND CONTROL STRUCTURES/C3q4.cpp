/*	Write a program to evaluate the following investment equation V=P(1+r)^n and print the tables which would give the value of V for
	various combination of the following values of P,r and n.
	
	P=1000,2000,---,10000
	r=0.11,0.12,---,0.20
	n=1,2,---,10	*/





#include<iostream>

using namespace std;

class Table
{
	public:
		void Display()
		{
			int P[10]={1000,2000,3000,4000,5000,6000,7000,8000,9000,10000};
			int n[10]={1,2,3,4,5,6,7,8,9,10};
			double r[10]={0.11,0.12,0.13,0.14,0.15,0.16,0.17,0.18,0.19,0.20};
			double V[10]={0,0,0,0,0,0,0,0,0,0};
			double k=0,ipow=1;

			for(int i=0;i<10;i++)
			{
				ipow=1;

				k=1+r[i];

				for(int j=1;j<=n[i];j++)
				{
					ipow=ipow*k;
				}

				V[i]=P[i]*ipow;
			}

			cout<<"\n**********|| Table ||**********\n";

			cout<<"P\t"<<"r\t"<<"n\t"<<"V\t"<<"\n";

			for(int i=0;i<10;i++)
			{
				cout<<P[i]<<"\t"<<r[i]<<"\t"<<n[i]<<"\t"<<V[i]<<"\t"<<"\n";
			}			
		}
};

int main()
{
	Table tobj;

	tobj.Display();

	return(0);
}
