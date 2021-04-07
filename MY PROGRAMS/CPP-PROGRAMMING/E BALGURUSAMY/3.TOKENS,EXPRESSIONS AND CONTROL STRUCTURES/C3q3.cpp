/*	write a program to print the following output using for loops.
	
	Input:	5
	Output:	1
		2 2 
		3 3 3
		4 4 4 4
		5 5 5 5 5	*/




#include<iostream>

using namespace std;

class Pattern
{
	public:
		void Display(int ino)
		{
			if(ino<0)
			{
				ino=-ino;
			}

			for(int i=1;i<=ino;i++)
			{
				for(int j=1;j<=i;j++)
				{
					cout<<i<<"\t";
				}	

				cout<<"\n";
			}
		}
};

int main()
{
	int ivalue=0;

	cout<<"\nEnter the no.: \n";
	cin>>ivalue;

	Pattern pobj;

	pobj.Display(ivalue);

	return(0);
}
