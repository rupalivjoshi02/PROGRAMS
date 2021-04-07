/* Accept number from user and check whether number is even or odd. */




#include<iostream>

#define YES 1
#define NO 0

using namespace std;

typedef int BOOL;

class EvenOdd
{
	public:
		BOOL Bool(int);
};

BOOL EvenOdd::Bool(int ino)
{
	if(ino<0)
	{
		ino=-ino;
	}

	if((ino%2)==0)
	{
		return(YES);
	}
	else
	{
		return(NO);
	}
}

int main()
{
	int ivalue=0;
	BOOL bret=NO;

	cout<<"Enter the no.:";
	cin>>ivalue;

	EvenOdd eoobj;

	bret=eoobj.Bool(ivalue);

	if(bret==YES)
	{
		cout<<"The given no. is even";
	}
	else
	{
		cout<<"The given no. is odd";
	}

	return(0);
}





