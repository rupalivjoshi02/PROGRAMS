/* Write a program which accept number from user and print even factors of that number.

Input: 36
Output:	2 4 6 12 18

*/




#include<iostream>

using namespace std;

class EveFact
{
	public:
		int i=0;

	public:
		void Display(int ino)
		{
			if(ino<0)
			{
				ino=-ino;
			}

			i=1;

			while(i<=(ino/2))
			{
				if(((i%2)==0) && ((ino%i)==0))
				{
					cout<<i<<"\t";
				}

				i++;
			}
		}
};

int main()
{
	int ivalue=0;

	cout<<"Enter the no.:";
	cin>>ivalue;

	EveFact efobj;

	efobj.Display(ivalue);

	return(0);
}
