/* Program to print 5 to 1 numbers on screen. */




#include<iostream>

using namespace std;

class Print
{
	public:
		int Display()
		{
			int i=0;

			for(i=5;i>0;i--)
			{
				cout<<i<<"\t";
			}
		}
};

int main()
{
	Print pobj;

	pobj.Display();

	return(0);
}





