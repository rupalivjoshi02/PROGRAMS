/* Accept no. from user and display its all factors.

Input:	15 
Output:	1 3 5

Input:	23
Output:	1 

Input:	10
Output:	1 2 5

Input:	-15 
Output:	1 3 5

*/




#include<iostream>

using namespace std;

class Factor1
{
	public:
		void Display(int ino)
		{
			int i=0;

			if(ino<0)
			{
				ino=-ino;
			}

			for(i=1;i<=(ino/2);i++)
			{
				if((ino%i)==0)
				{
					cout<<i;
				}
			}
		}
};

int main()
{
	int ivalue=0;

	cout<<"Enter the no.:";
	cin>>ivalue;

	Factor1 fobj;

	fobj.Display(ivalue);

	return(0);
}
