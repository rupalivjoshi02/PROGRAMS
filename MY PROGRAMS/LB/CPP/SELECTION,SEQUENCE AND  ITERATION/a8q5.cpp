/* Write a program which accept number from user and display its table in reverse order.

Input:	2
Output:	20 18 16 14 12 10 8 6 4 2

Input:	5
Output:	50 45 40 35 30 25 20 15 10 5

Input:	-5
Output:	50 45 40 35 30 25 20 15 10 5

*/




#include<iostream>

using namespace std;

class RevTable
{
	public:
		int i=0,imult=1;

	public:
		void Display(int);
};

void RevTable::Display(int ino)
{
	if(ino<0)
	{
		ino=-ino;
	}

	for(i=10;i>0;i--)
	{
		imult=ino*i;

		cout<<imult<<" ";
	}
}

int main()
{
	int ivalue=0;

	cout<<"Enter the no.:";
	cin>>ivalue;

	RevTable rtobj;

	rtobj.Display(ivalue);

	return(0);
}
