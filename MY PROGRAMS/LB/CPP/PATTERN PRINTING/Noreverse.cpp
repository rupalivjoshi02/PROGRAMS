/* Accept no. from user and display below pattern. 

Input:	4
Output:	1 2 3 4 3 2 1

Input:	6
Output:	1 2 3 4 5 6 5 4 3 2 1 

*/




#include<iostream>

using namespace std;

class NoReverse
{
	public:
		void Display(int ino)
		{
			int i=0;

			if(ino<0)
			{
				ino=-ino;
			}

			for(i=1;i<=ino;i++)
			{
				cout<<i<<"\t";
			}

			for(i=(ino-1);i>0;i--)
			{
				cout<<i<<"\t";
			}
		}
};

int main()
{
	int ivalue=0;

	cout<<"Enter the no.:";
	cin>>ivalue;

	NoReverse nrobj;

	nrobj.Display(ivalue);

	return(0);
}
