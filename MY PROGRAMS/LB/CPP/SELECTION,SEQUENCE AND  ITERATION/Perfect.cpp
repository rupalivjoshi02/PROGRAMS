/* Accept no. from user and check whether that no. is perfect no. or not.

Input:	12
Output:	NO

Input:	6
Output:	YES 

Input:	28
Output:	YES 

*/




#include<iostream>

using namespace std;

#define YES 1
#define NO 0

typedef int BOOL;

class Perfect
{
	public:
		BOOL Bool(int);
};

BOOL Perfect::Bool(int ino)
{
	int i=0,isum=0;

	if((ino==1) || (ino==-1))
	{
		return(NO);
	}

	if(ino<0)
	{
		ino=-ino;
	}

	for(i=1;i<=(ino/2);i++)
	{
		if((ino%i)==0)
		{
			isum=isum+i;
		}
	}

	if(ino==isum)
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

	Perfect pobj;

	bret=pobj.Bool(ivalue);

	if(bret==YES)
	{
		cout<<"YES,it is a perfect no..";
	}
	else
	{
		cout<<"No,it is not a perfect no..";
	}

	return(0);
}
