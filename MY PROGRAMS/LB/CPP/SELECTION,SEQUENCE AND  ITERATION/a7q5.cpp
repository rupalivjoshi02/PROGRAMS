/* Write a program which accept N and print first 5 multiples of N.

Input:	4
Output: 4 8 12 16 20

*/




#include<iostream>

using namespace std;

class Multiples
{
	public:
		int i=0,imult=1;

	public:
		void Display(int ino)
		{
			if(ino<0)
			{
				ino=-ino;
			}

			for(i=1;i<=5;i++)
			{
				imult=ino*i;

				cout<<imult<<" ";
			}
		}
};

int main()
{
	int ivalue=0;

	cout<<"Enter the no.:";
	cin>>ivalue;

	Multiples mobj;

	mobj.Display(ivalue);

	return(0);
}
