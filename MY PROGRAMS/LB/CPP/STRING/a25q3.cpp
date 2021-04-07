/* Accept Character from user and check whether it is digit or not (0-9).

Input:	7
Output:	YES

Input:	d
Output:	NO

*/




#include<iostream>

#define YES 1
#define NO 0

using namespace std;

typedef int BOOL;

class CheckDigit
{
	public:
		BOOL Bool(char);
};

BOOL CheckDigit::Bool(char ch)
{
	if((ch>='0') && (ch<='9'))
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
	char cvalue='\0';
	BOOL bret=NO;

	cout<<"Enter the character:";
	cin>>cvalue;

	CheckDigit cdobj;

	bret=cdobj.Bool(cvalue);

	if(bret==YES)
	{
		cout<<"YES,it is a digit.";
	}
	else
	{
		cout<<"NO,it is not a digit.";
	}

	return(0);
}
