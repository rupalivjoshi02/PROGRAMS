/* Accept no. from user and display below pattern. 

Input:	3
Output:	-3 * -2 * -1 * 0 * 1 * 2 * 3 *

*/




#include<iostream>

using namespace std;

class NoStar
{
	public:
		void Display(int ino)
		{
			int i=0;

			if(ino<0)
			{
				ino=-ino;
			}

			for(i=-ino;i<=ino;i++)
			{
				cout<<i<<" * ";
			}
		}
};

int main()
{
	int ivalue=0;

	cout<<"Enter the no.:";
	cin>>ivalue;

	NoStar nsobj;

	nsobj.Display(ivalue);

	return(0);
}
