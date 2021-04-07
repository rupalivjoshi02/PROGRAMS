/* Accept number of rows and number of columns from user and display below pattern.

Input:	irow:3	icol:4
Output:	1  2  3  4
	5  6  7  8
	9 10 11 12

*/




#include<iostream>

using namespace std;

class Pattern
{
	public:
		int i=0,j=0,icnt=0;

	public: 	
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

	icnt=1;

	for(i=irow;i>0;i--)
	{
		for(j=1;j<=icol;j++)
		{
			cout<<icnt<<" ";

			icnt++;
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
