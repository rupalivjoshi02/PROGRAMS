/* Accept  no. from user and check whether that no. i divisible by 3 or not.

Input:	15 
Output:	YES

Input:	-21
Output:	YES

Input:	17
Output:	NO

Input:	0
Output:	NO

*/




#include<iostream>

using namespace std;

#define YES 1
#define NO 0

typedef int BOOL;

class DivisibleBy3
{
	public:
		BOOL Bool(int);
};

BOOL DivisibleBy3::Bool(int ino)
{
	if(ino<0)
	{
		ino=-ino;
	}

	if((ino%3)==0)
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

	DivisibleBy3 dobj;

	bret=dobj.Bool(ivalue);

	if(bret==YES)
	{
		cout<<"YES,No. is divisible by 3.";
	}
	else
	{
		cout<<"NO,No. is not divisible by 3.";
	}

	return(0);
}
