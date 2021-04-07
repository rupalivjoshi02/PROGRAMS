/* Accept number from user and display below pattern.

Input:	5
Output: A B C D E

*/




#include<iostream>

using namespace std;

class Pattern
{
	public:
		void Display(int);
};

void Pattern::Display(int ino)
{
	int i=0;
	char ch='\0';

	if(ino<0)
	{
		ino=-ino;
	}

	ch='A';

	for(i=1;i<=ino;i++)
	{
		cout<<ch<<"\t";

		ch++;
	}
}

int main()
{
	int ivalue=0;

	cout<<"Enter the no.:";
	cin>>ivalue;

	Pattern pobj;

	pobj.Display(ivalue);

	return(0);
}
