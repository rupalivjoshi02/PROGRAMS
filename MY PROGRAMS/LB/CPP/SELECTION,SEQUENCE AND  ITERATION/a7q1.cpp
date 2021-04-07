/* Write a program which accept number from user and print that number of $ & * on screen.

Input: 5
Output: $ * $ * $ * $ * $ *

Input: 3
Output: $ * $ * $ *

Input: 3
Output: $ * $ * $ *

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
				cout<<" $ * ";
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
