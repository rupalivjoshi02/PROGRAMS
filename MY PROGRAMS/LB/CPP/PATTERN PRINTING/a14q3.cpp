/* Accept number from user and display below pattern.

Input:	5
Output: 1 * 2 * 3 * 4 * 5 *

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
	int i=0;

	if(ino<0)
	{
		ino=-ino;
	}

	for(i=1;i<=ino;i++)
	{
		cout<<i<<" * ";
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
