/* Accept number from user and display below pattern.

Input:	5
Output: 5 # 4 # 3 # 2 # 1 #

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

	for(i=ino;i>0;i--)
	{
		cout<<i<<" # ";
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
