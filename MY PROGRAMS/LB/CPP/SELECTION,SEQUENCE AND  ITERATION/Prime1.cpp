/* Accept no. from user and check whether that no. is prime no. or not (Use flag case).

Input:	-5
Output:	YES

Input:	11
Output:	YES 

Input:	10
Output:	NO 

Input:	29
Output:	YES 

*/




#include<iostream>

#define YES 1
#define NO 0

using namespace std;

typedef int BOOL;

class Prime1
{
	public:
		BOOL Bool(int);
};

BOOL Prime1::Bool(int ino)
{
	int i=0;
	BOOL flag=YES;

	if((ino==1) || (ino==-1) || (ino==0))
	{
		return(NO);
	}

	if(ino<0)
	{
		ino=-ino;
	}

	for(i=(ino/2);ino>1;i--)
	{
		if((ino%i)==0)
		{
			flag=NO;

			break;
		}
	}

	return(flag);
}

int main()
{
	int ivalue=0;
	BOOL bret=NO;

	cout<<"Enter the no.:";
	cin>>ivalue;
	
	Prime1 pobj;

	bret=pobj.Bool(ivalue);

	if(bret==YES)
	{
		cout<<"YES,it is a prime no..";
	}
	else
	{
		cout<<"NO,it is not a prime no..";
	}

	return(0);
}
