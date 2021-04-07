/*	An electricity board charges the following rates to domestic users to discouragelarge consumption of energy:
	
	For the 1st 100 units: 60P per unit
	For the nexst 200 units: 80P per unit
	Beyond 300 units: 90P per unit
	
	All usrs are charged a minimum of Rs.50.00.
	If the total amount is more than Rs.300.00 then an additional charge of 15% is added.
	Write a program to read the names of users and no. of units consumed and print out the charges with names.	*/





#include<iostream>

using namespace std;

class Electricity
{
	public:
		void Display()
		{
			int hous[5]={101,102,103,104,105};
			float unit[5]={120,0,45,8954,6312.155};
			float bill[5]={0.0,0.0,0.0,0.0,0.0};
			float extra[5]={0.0,0.0,0.0,0.0,0.0};

			for(int i=0;i<5;i++)
			{
				if((unit[i]>0) && (unit[i]<=100))
				{
					bill[i]=unit[i]*60;
				}
				else if((unit[i]>100) && (unit[i]<=200))
				{
					bill[i]=unit[i]*80;
				}
				else if(unit[i]>=300)
				{
					bill[i]=unit[i]*90;
					extra[i]=(bill[i]*15)/100;
				}
				else if(unit[i]<=0)
				{
					bill[i]=50;
				}
			}

			cout<<"\nHouse No \t"<<"Unit \t\t"<<"Bill \t\t"<<"Extra charges \t"<<"\n";

			for(int i=0;i<5;i++)
			{
				cout<<hous[i]<<"\t\t"<<unit[i]<<"\t\t"<<bill[i]<<"\t\t"<<extra[i]<<"\t"<<"\n";
			}
		}
};

int main()
{
	Electricity eobj;

	eobj.Display();

	return(0);
}
