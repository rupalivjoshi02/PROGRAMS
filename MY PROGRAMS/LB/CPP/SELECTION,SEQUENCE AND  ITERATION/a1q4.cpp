/* Accept one number and check whether is is divisible by 5 or not. */




#include<iostream>

#define YES 1
#define NO 0

using namespace std;

typedef int BOOL;

class DivisibleBy5
{
	public:
		BOOL Bool(int ino)
		{
			if(ino<0)
			{
				ino=-ino;
			}

			if((ino%5)==0)
			{
				return(YES);
			}
			else
			{
				return(NO);
			}
		}
};

int main()
{
	int ivalue=0;
	BOOL bret=NO;

	cout<<"Enter the no.:";
	cin>>ivalue;

	DivisibleBy5 dbobj;

	bret=dbobj.Bool(ivalue);

	if(bret==YES)
	{
		cout<<"YES,the no. is divisible by 5.";	
	}
	else
	{
		cout<<"NO,the no. is not divisible by 5.";	
	}

	return(0);
}





