/* Write a program which accept two numbers and check whether numbers are equal or not.

Input:	10 10
Output:	YES

Input:	10 12
Output:	NO

Input:	10 -10
Output:	NO

*/




#include<iostream>

#define YES 1
#define NO 0

using namespace std;

typedef int BOOL;

class Equal
{
	public:
		BOOL Bool(int,int);
};

BOOL Equal::Bool(int ino1,int ino2)
{
	if(ino1==ino2)
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
	int ivalue1=0,ivalue2=0;
	BOOL bret=NO;

	cout<<"Enter 2 no.:";
	cin>>ivalue1>>ivalue2;

	Equal eobj;

	bret=eobj.Bool(ivalue1,ivalue2);

	if(bret==YES)
	{
		cout<<"Both no. are equal.";
	}
	else
	{
		cout<<"Both no. are unequal.";
	}

	return(0);
}
