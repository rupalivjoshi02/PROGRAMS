/* Accept character from user and check whether tht character is capital or not. */




#include<iostream>

#define YES 1
#define NO 0

using namespace std;

typedef int BOOL;

class CharCapital
{
	public:
		BOOL Bool(char ch)
		{
			if((ch>='A') && (ch<='Z'))
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
	char cvalue='\0';
	BOOL bret=NO;

	cout<<"Enter the character:";
	cin>>cvalue;

	CharCapital ccobj;

	bret=ccobj.Bool(cvalue);

	if(bret==YES)
	{
		cout<<"It is capital a character";
	}
	else
	{
		cout<<"It is not a capital character";	
	}

	return(0);
}
