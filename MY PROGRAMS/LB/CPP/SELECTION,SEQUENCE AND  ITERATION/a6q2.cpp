/* Write a program which accept one number from user and check whether that number is greater than 100 or not.

Input:	101
Output:	YES

Input:	39
Output:	NO

*/




#include<iostream>

#define YES 1
#define NO 0

using namespace std;

typedef int BOOL;

class Greater
{
	public:
		BOOL Bool(int);
};

BOOL Greater::Bool(int ino)
{
	if(ino>100)
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

	Greater gobj;

	bret=gobj.Bool(ivalue);

	if(bret==YES)
	{
		cout<<"The given no. is greater than 100.";
	}
	else
	{
		cout<<"The given no. is smaller than 100.";
	}

	return(0);
}
