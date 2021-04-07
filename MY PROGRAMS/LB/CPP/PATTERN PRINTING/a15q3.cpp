/* Accept number of rows and number of columns from user and display below pattern.

Input:	irow:3	icol:5
Output: 5 4 3 2 1
	5 4 3 2 1
	5 4 3 2 1

*/




#include<iostream>

using namespace std;

class Pattern
{
	public:
		int i=0,j=0;

		void Display(int,int);
};

void Pattern::Display(int irow,int icol)
{
	if(irow<0)
	{
		irow=-irow;
	}

	if(icol<0)
	{
		icol=-icol;
	}

	for(i=1;i<=irow;i++)
	{	
		for(j=icol;j>0;j--)
		{
			cout<<j<<" ";
		}

		cout<<"\n";
	}
}

int main()
{
	int ivalue1=0,ivalue2=0;

	cout<<"Enter the rows and columns:";
	cin>>ivalue1>>ivalue2;

	Pattern pobj;

	pobj.Display(ivalue1,ivalue2);

	return(0);
}
