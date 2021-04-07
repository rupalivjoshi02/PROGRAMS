/* Program to print 5 times “Marvellous” on screen. */




#include<iostream>

using namespace std;

class Print
{
	public:
		int Display()
		{
			int i=0;

			for(i=1;i<=5;i++)
			{
				cout<<"\nMarvellous";
			}
		}
};

int main()
{
	Print pobj;

	pobj.Display();

	return(0);
}





