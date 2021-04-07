/* Accept  no. from user and display below pattern.

Input:	6
Output:	$ $ $ $ $ $

Input:	0
Output:	

Input:	-4
Output:	$ $ $ $ 

*/





#include<iostream>

using namespace std;

class Dollar
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

			for(i=0;i<ino;i++)
			{
				cout<<" $ ";
			}
		}
};

int main()
{
	int ivalue=0;

	cout<<"Enter the no.:";
	cin>>ivalue;

	Dollar dobj;

	dobj.Display(ivalue);

	return(0);
}
