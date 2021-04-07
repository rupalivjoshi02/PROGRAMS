/* Accept no. from user and display below pattern. 

Input:	5
Output:	3 * 6 * 9 * 12 * 15 *

Input:	3
Output:	3 * 6 * 9 * 

*/




#include<iostream>

using namespace std;

class Multipalsof3Star
{
	public:
		void Display(int ino)
		{
			int i=0,imult=0;
	
			if(ino<0)
			{
				ino=-ino;
			}

			for(i=1;i<=ino;i++)
			{
				imult=i*3;

				cout<<imult<<" * ";
			}
		}
};

int main()
{
	int ivalue=0;

	cout<<"Enter the no.:";
	cin>>ivalue;

	Multipalsof3Star msobj;

	msobj.Display(ivalue);

	return(0);
}
