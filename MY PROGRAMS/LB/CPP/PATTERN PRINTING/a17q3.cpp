/* Accept number of rows and number of columns from user and display below pattern.

Input:	irow:5	icol:5
Output:	a b c d e
       	1 2 3 4 5
	a b c d e
        1 2 3 4 5
	a b c d e

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

	for(i=1;i<=irow;i++)
	{
		ch='a';

		for(j=1;j<=icol;j++)
		{
			if((i%2)!=0)
			{
				cout<<ch<<" ";
	
				ch++;
			}
			else
			{
				cout<<j<<" ";
			}
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
