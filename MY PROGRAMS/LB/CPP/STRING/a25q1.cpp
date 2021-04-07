/* Accept Character from user and check whether it is alphabet or not (A-Z a-z).

Input:	F
Output:	YES

Input:	$
Output:	NO

*/




#include<iostream>

#define YES 1
#define NO 0

using namespace std;

typedef int BOOL;

class CheckAlphabetChar
{
	public:
		BOOL Bool(char);
};

BOOL CheckAlphabetChar::Bool(char ch)
{
	if(((ch>=97) && (ch<=122)) || ((ch>=65) && (ch<=90)))
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

	CheckAlphabetChar cacobj;

	bret=cacobj.Bool(cvalue);

	if(bret==YES)
	{
		cout<<"YES,it is a alphabet.";
	}
	else
	{
		cout<<"NO,it is not a alphabet.";
	}

	return(0);
}
