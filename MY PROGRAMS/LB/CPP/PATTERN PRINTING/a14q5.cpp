/* Accept number from user and display below pattern.

Input:	8
Output: 2 4 6 8 12 14 16

*/




#include<iostream>

using namespace std;

class Pattern
{
	public:
		void Display(int);
};

void Pattern::Display(int ino)
{
	int i=0,imult=1;

	if(ino<0)
	{
		ino=-ino;
	}

	for(i=1;i<=ino;i++)
	{
		imult=i*2;

		cout<<imult<<"\t";
	}
}

int main()
{
	int ivalue=0;

	cout<<"Enter the no.:";
	cin>>ivalue;

	Pattern pobj;

	pobj.Display(ivalue);

	return(0);
}
