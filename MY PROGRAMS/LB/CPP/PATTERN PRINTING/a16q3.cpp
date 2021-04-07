/* Accept number of rows and number of columns from user and display below pattern.

Input:	irow:3	icol:5
Output:	A A A A A
	B B B B B
	C C C C C

*/




#include<iostream>

using namespace std;

class Pattern
{
	public:
		int i=0,j=0;
		char ch='\0';

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

	ch='A';

	for(i=1;i<=irow;i++)
	{
		for(j=1;j<=icol;j++)
		{
			cout<<ch<<" ";
		}
		
		ch++;

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
