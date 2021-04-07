/* Accept 2 no. from user and check whether the 2nd no. is factor of 1st no..

Input:	15 5
Output:	YES

Input:	15 15
Output:	YES

Input:	5 15
Output:	NO

Input:	15 1
Output:	YES

Input:	-15 5
Output:	YES

Input:	-15 -5
Output:	YES

Input:	-15 4
Output:	NO

Input:	21 5
Output:	NO

*/




#include<iostream>

#define YES 1
#define NO 0

using namespace std;

typedef int BOOL;

class Factor
{
	public:
		BOOL Bool(int,int);
};

BOOL Factor::Bool(int ino1,int ino2)
{
	if(ino1<0)
	{
		ino1=-ino1;
	}
	
	if(ino2<0)
	{
		ino2=-ino2;
	}

	if((ino1%ino2)==0)
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

	cout<<"Enter the 2 no.:";
	cin>>ivalue1>>ivalue2;

	Factor fobj;

	bret=fobj.Bool(ivalue1,ivalue2);

	if(bret==YES)
	{
		cout<<"YES,2nd no. is the factor of 1st no.";
	}
	else
	{
		cout<<"NO,2nd no. is not the factor of 1st no.";
	}

	return(0);
}


