/* Accept no. from user and display below pattern. 

Input:	4
Output:	1 2 3 4 * * * * 4 3 2 1

*/




#include<iostream>

using namespace std;

class NoStarReverse
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
				cout<<i<<"  ";
			}

			for(i=1;i<=ino;i++)
			{
				cout<<" * ";
			}

			for(i=ino;i>0;i--)
			{
				cout<<i<<"  ";
			}
		}
};

int main()
{
	int ivalue=0;

	cout<<"Enter the no.:";
	cin>>ivalue;

	NoStarReverse nsrobj;

	nsrobj.Display(ivalue);

	return(0);
}
