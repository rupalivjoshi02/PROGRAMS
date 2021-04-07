/* Accept no. from user and display below pattern. 

Input:	irow:5	icol:4
Output:	* * * *
	$ $ $ $
	$ $ $ $
 	$ $ $ $
	* * * * 

*/




#include<iostream>

using namespace std;

class Pattern
{
	public:
		void Display(int irow,int icol)
		{
			int i=0,j=0;

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
				for(j=1;j<=icol;j++)
				{
					if((i==1) || (i==irow))
					{
						cout<<" * ";
					}
					else
					{
						cout<<" $ ";
					}
				}

				cout<<"\n";
			}
		}
};

int main()
{
	int ivalue1=0,ivalue2=0;

	cout<<"Enter the rows and columns:";
	cin>>ivalue1>>ivalue2;

	Pattern pobj;

	pobj.Display(ivalue1,ivalue2);

	return(0);
}

