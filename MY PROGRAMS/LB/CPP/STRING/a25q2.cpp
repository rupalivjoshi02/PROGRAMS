/* Accept Character from user and check whether it is capital or not (A-Z).

Input:	F
Output:	YES

Input:	d
Output:	NO

*/




#include<iostream>

#define YES 1
#define NO 0

using namespace std;

typedef int BOOL;

class CheckCapitalChar
{
	public:
		BOOL Bool(char);
};

BOOL CheckCapitalChar::Bool(char ch)
{
	if((ch>=65) && (ch<=90))
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

	CheckCapitalChar cccobj;

	bret=cccobj.Bool(cvalue);

	if(bret==YES)
	{
		cout<<"YES,it is a capital chracter.";
	}
	else
	{
		cout<<"NO,it is not a capital character.";
	}

	return(0);
}
