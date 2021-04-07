/* Write a program which accept accept range from user and display all numbers in between that range in reverse order.

Input:	23 35
Output:	35 34 33 32 31 30 29 28 27 26 25 24 23

Input:	10 18
Output:	18 17 16 15 14 13 12 11 10

Input:	-10 2
Output:	2 1 0 -1 -2 -3 -4 -5 -6 -7 -8 -9 -10

Input:	90 18
Output:	Invalid input

*/




#include<iostream>

using namespace std;

class RevRange
{
	public:
		void Display(int ino1,int ino2)
		{
			int i=0;

			if(ino1>ino2)
			{
				cout<<"Invalid input.";
			}

			for(i=ino2;i>=ino1;i--)
			{
				cout<<i<<" ";
			}
		}
};

int main()
{
	int ivalue1=0,ivalue2=0;

	cout<<"Enter the 2 no.:";
	cin>>ivalue1>>ivalue2;

	RevRange rrobj;
	
	rrobj.Display(ivalue1,ivalue2);

	return(0);
}
