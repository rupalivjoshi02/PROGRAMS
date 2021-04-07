/* Accept no. from user and display below pattern. 

Input:	4
Output:	1 2 3 4 
	1 2 3 4
	1 2 3 4
	1 2 3 4

*/




#include<iostream>

using namespace std;

class Pattern
{
	public:
		void Display(int ino)
		{
			int i=0,j=0;

			if(ino<0)
			{
				ino=-ino;
			}

			for(i=1;i<=ino;i++)
			{
				for(j=1;j<=ino;j++)
				{
					cout<<j<<"  ";
				}

				cout<<"\n";
			}
		}
};

int main()
{
	int ivalue=0;

	cout<<"Enter the no.:";
	cin>>ivalue;

	Pattern pobj;

	pobj.Display(ivalue);

	return(0);
}
