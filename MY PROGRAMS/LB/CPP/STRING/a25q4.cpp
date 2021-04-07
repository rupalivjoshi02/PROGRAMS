/* Accept Character from user and check whether it is small case or not (a-z).

Input:	g
Output:	YES

Input:	D
Output:	NO

*/




#include<iostream>

#define YES 1
#define NO 0

using namespace std;

typedef int BOOL;

class CheckSmallChar
{
	public:
		BOOL Bool(char);
};

BOOL CheckSmallChar::Bool(char ch)
{
	if((ch>=97) && (ch<=122))
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

	CheckSmallChar cscobj;

	bret=cscobj.Bool(cvalue);

	if(bret==YES)
	{
		cout<<"YES,it is a small case character.";
	}
	else
	{
		cout<<"NO,it is not a small case character.";
	}

	return(0);
}
