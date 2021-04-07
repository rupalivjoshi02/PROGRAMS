#include<iostream>
#include<string>

using namespace std;

class CricketTable
{
	public:
		void Display()
		{	
			char name[3]={'Rahul','Sachin','D'};
			int r[3]={8430,4200,3350};
			int in[3]={230,130,105};
			int t[3]={18,9,11};
			float davg[3]={0.0,0.0,0.0};
			int total=0;

			for(int i=0;i<3;i++)
			{
				cout<<"\n"<<name<<" scored "<<r[i]<<" runs in "<<in[i]<<"innings and "<<t[i]<<" times he is not out.";
			}

			cout<<"\n***********|| Table ||***********\n";

			cout<<"Players name\t"<<"Runs\t"<<"Innings\t"<<"Times not out\t"<<"Average"<<"\n";

			for(int i=0;i<3;i++)
			{
				total=r[i]+in[i]+t[i];
				davg[i]=total/3;

				cout<<name<<"\t\t"<<r[i]<<"\t"<<in[i]<<"\t"<<t[i]<<"\t\t"<<davg[i]<<"\t"<<"\n";
			}
		}
};

int main()
{
	CricketTable ctobj;

	ctobj.Display();

	return(0);
}
