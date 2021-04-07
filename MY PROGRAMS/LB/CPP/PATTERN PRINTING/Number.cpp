/* Accept no. from user and display below pattern. 

Input:	5
Output:	1 2 3 4 5

Input:	-5
Output:	1 2 3 4 5

*/




#include<iostream>

using namespace std;

class NoPrint
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
		}
};

int main()
{
	int ivalue=0;

	cout<<"Enter the no.:";
	cin>>ivalue;

	NoPrint npobj;

	npobj.Display(ivalue);

	return(0);
}
