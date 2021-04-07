/* Write a program which accept number from user and check whether it contains 0 in it or not.

Input:	2395
Output:	NO

Input:	1018
Output:	YES

Input:	10687
Output:	YES

Input:	9000
Output:	YES

*/




#include<iostream>

#define YES 1
#define NO 0

typedef int BOOL;

using namespace std;

class Zero
{
	public:
		BOOL Bool(int);
};

BOOL Zero::Bool(int ino)
{
	int idig=0;

	if(ino<0)
	{
		ino=-ino;
	}

	while(ino!=0)
	{
		idig=ino%10;

		if(idig==0)
		{
			break;
		}

		ino=ino/10;
	}

	if(idig==0)
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

	Zero zobj;

	bret=zobj.Bool(ivalue);

	if(bret==YES)
	{
		cout<<"The given no. contains 0";
	}
	else
	{
		cout<<"The given no. does not contains 0";
	}

	return(0);
}
	
