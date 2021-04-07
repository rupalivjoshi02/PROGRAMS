/* Accept no. from user and display all its factors in revers order.

Input:	12
Output:	6 4 3 2 1

*/




#include<iostream>

using namespace std;

class RevFact
{
	public:
		void Display(int ino)
		{
			int i=0;

			if(ino<0)
			{
				ino=-ino;
			}

			for(i=(ino/2);i>0;i--)
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

	RevFact rfobj;

	rfobj.Display(ivalue);

	return(0);
}
