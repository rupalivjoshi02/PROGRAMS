/* Write a program which accepts N from user and print all odd numbers up to N.

Input:	18
Output: 1 3 5 7 9 11 13 15 17

*/




#include<iostream>

using namespace std;

class Odd
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

			for(i=1;i<ino;i++)
			{
				if((i%2)!=0)
				{
					cout<<i<<" ";
				}
			}
		}
};

int main()
{
	int ivalue=0;

	cout<<"Enter the no.:";
	cin>>ivalue;

	Odd oobj;

	oobj.Display(ivalue);

	return(0);
}
