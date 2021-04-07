/* Accept no. from user and display below pattern. 

Input:	irow:4	icol:4
Output:	 1   2   3   4
	 5   6   7   8
	 9   10  11  12 
	 13  14  15  16

*/




#include<iostream>

using namespace std;

class Pattern
{
	public:
		void Display(int irow,int icol)
		{
			int i=0,j=0,icnt=1;

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
					cout<<icnt<<"\t";

					icnt++;
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

