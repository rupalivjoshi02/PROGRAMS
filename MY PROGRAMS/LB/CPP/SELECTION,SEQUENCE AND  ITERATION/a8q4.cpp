/* Write a program which accept number from user and display its table.

Input:	2
Output:	2 4 6 8 10 12 14 16 18 20

Input:	5
Output:	5 10 15 20 25 30 35 40 45 50

Input:	-5
Output:	5 10 15 20 25 30 35 40 45 50

*/




#include<iostream>

using namespace std;

class Table
{
	public:
		int i=0,imult=1;

	public:
		void Display(int);
};

void Table::Display(int ino)
{
	if(ino<0)
	{
		ino=-ino;
	}

	for(i=1;i<=10;i++)
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

	Table tobj;

	tobj.Display(ivalue);

	return(0);
}
