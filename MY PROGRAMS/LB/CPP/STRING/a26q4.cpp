/* Accept Character from user and check whether it is special symbol or not (!, @, #, $, %, ^, &, *).

Input:	%
Output:	YES

Input:	d
Output:	NO

*/




#include<iostream>

#define YES 1
#define NO 0

using namespace std;

typedef int BOOL;

class CheckSpecialChar
{
	public:
		BOOL Bool(char);
};

BOOL CheckSpecialChar::Bool(char ch)
{
	if(((ch>=33) && (ch<=47)) || ((ch>=58) && (ch<=64)))
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

	CheckSpecialChar cscobj;

	bret=cscobj.Bool(cvalue);

	if(bret==YES)
	{
		cout<<"YES,it is a special character.";
	}
	else
	{
		cout<<"NO,it is not a special character.";
	}

	return(0);
}
