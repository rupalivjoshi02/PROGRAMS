/* Write a program which accept number from user and print numbers till that number.

Input:	8 
Output: 1 2 3 4 5 6 7 8

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

			for(i=1;i<=ino;i++)
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
