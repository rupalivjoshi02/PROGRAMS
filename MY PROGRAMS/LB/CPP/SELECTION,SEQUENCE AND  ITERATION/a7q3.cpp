/* Write a program which accept number from user and print its numbers line.

Input:	4 
Output: -4 -3 -2 -1 0 1 2 3 4 

*/




#include<iostream>

using namespace std;

class Print
{
	public:
		int i=0;

	public:
		void Display(int ino)
		{
			if(ino<0)
			{
				ino=-ino;
			}

			for(i=-ino;i<=ino;i++)
			{
				cout<<i<<" ";
			}
		}
};

int main()
{
	int ivalue=0;

	cout<<"Enter the no.:";
	cin>>ivalue;

	Print pobj;

	pobj.Display(ivalue);

	return(0);
}
