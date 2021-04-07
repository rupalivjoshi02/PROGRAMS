/* Write a program which accept number from user and display its factors in decreasing order.

Input:	12
Output:	6 4 3 2 1

Input:	13
Output:	1
	
Input:	10
Output:	5 2 1

*/




#include<iostream>

using namespace std;

class Order
{
	public:
		void Display(int ino)
		{
			int i=0;

			if(ino<0)
			{
				ino=-ino;
			}

			for(i=(ino/2);i>0;i--)
			{
				if((ino%i)==0)
				{
					cout<<i;
				}
			}
		}
};

int main()
{
	int ivalue=0;

	cout<<"Enter the no.:";
	cin>>ivalue;

	Order oobj;

	oobj.Display(ivalue);

	return(0);
}
