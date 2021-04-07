/* Accept no. from user and display below pattern. 

Input:	irow:4	icol:4
Output:	A B C D
	A B C D
	A B C D
	A B C D

*/




#include<iostream>

using namespace std;

class Pattern
{
	public:
		void Display(int irow,int icol)
		{
			int i=0,j=0;
			char ch='\0';

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
				ch='A';

				for(j=1;j<=icol;j++)
				{
					cout<<ch<<" ";

					ch++;
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
