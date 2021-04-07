/* Write a program which accept number from user and display its digits in reverse order.

Input:	2395
Output:	5
	9
	3
	2

Input:	1018
Output:	1
	0
	1
	8

Input:	-1018
Output:	1
	0
	1
	8

Input:	9000
Output:	0
	0
	0
	9

*/




#include<iostream>

using namespace std;

class Reverse
{
	public:
		void Display(int);
};

void Reverse::Display(int ino)
{
	int idig=0;

	if(ino<0)
	{
		ino=-ino;
	}

	while(ino!=0)
	{
		idig=ino%10;

		cout<<idig<<"\n";

		ino=ino/10;
	}
}

int main()
{
	int ivalue=0;

	cout<<"Enter the no.:";
	cin>>ivalue;

	Reverse robj;

	robj.Display(ivalue);

	return(0);
}
	
