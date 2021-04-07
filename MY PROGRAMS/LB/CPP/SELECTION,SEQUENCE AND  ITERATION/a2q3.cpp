/* Accept on number from user if number is less than 10 then print “Hello” otherwise print “Demo". */




#include<iostream>

using namespace std;

class Print
{
	public:
		void Display(int);
};

void Print::Display(int ino)
{
	if(ino<0)
	{
		ino=-ino;
	}

	if(ino<10)
	{
		cout<<"Hello";
	}
	else
	{
		cout<<"Demo";
	}
}

int main()
{
	int ivalue=0;

	cout<<"Enter the no.:";
	cin>>ivalue;

	Print pobj;

	pobj.Display(ivalue);

	return(0);
}





