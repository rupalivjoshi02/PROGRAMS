/* Design application for school management system. As school is primary there are 4 standards from 1 to 4. School fees of each standard is different. For first standard fees are 8900, for second standard 12790, for third standard 21000 and for fourth standard fees are 23450. We have to accept standard from user and display the corresponding fees.

Input:	2
Output:	12790

Input:	4
Output:	23450

Input:	6
Output:	Wrong input

*/




#include<iostream>

using namespace std;

class School
{
	public:
		void Display(int);
};

void School::Display(int istd)
{
	if(istd==1)
	{
		cout<<"School fee is Rs.8900";
	}
	else if(istd==2)
	{
		cout<<"School fee is Rs.12790";
	}
	else if(istd==3)
	{
		cout<<"School fee is Rs.21000";
	}
	else if(istd==4)
	{
		cout<<"School fee is Rs.23450";
	}
	else if(istd>4)
	{
		cout<<"Invalid input.";
	}	
}

int main()
{
	int ivalue=0;

	cout<<"Enter the standard of student.";
	cin>>ivalue;

	School sobj;

	sobj.Display(ivalue);

	return(0);
}


