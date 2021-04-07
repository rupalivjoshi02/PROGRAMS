/* Write a program which accept number from user and display below pattern.

Input:	5
Output:	* * * * * # # # # #

Input:	-5
Output:	* * * * * # # # # #

Input:	6
Output:	* * * * * * # # # # # #

Input:	2
Output:	* * # # 

*/




#include<iostream>

using namespace std;

class Print
{
	public:
		void Display(int ino)
		{
			int i=0;

			if(ino<0)
			{
				ino=-ino;
			}

			for(i=1;i<=(2*ino);i++)
			{
				if(i<=ino)
				{
					cout<<" * ";
				}
				else
				{
					cout<<" # ";
				}
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
