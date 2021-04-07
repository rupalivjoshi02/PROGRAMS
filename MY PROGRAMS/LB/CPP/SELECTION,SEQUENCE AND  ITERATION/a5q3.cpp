/* Write a program which accept number from user and display all its non factors.

Input:	12
Output:	5 7 8 9 10 11

Input:	13
Output:	2 3 4 5 6 7 8 9 10 11 
	
Input:	10
Output:	3 4 6 7 8 9

*/




#include<iostream>

using namespace std;

class NonFact
{
	public:
		void Display(int ino)
		{
			int i=0;

			if(ino<0)
			{
				ino=-ino;
			}

			for(i=1;i<ino;i++)
			{
				if((ino%i)!=0)
				{
					cout<<i<<"\t";
				}
			}
		}
};

int main()
{
	int ivalue=0;

	cout<<"Enter the no.:";
	cin>>ivalue;

	NonFact nfobj;

	nfobj.Display(ivalue);

	return(0);
}
