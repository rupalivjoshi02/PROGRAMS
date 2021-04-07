/* Write a program which accept string from user and accept one character. Check whether that character is present in string or not.

Input:	String:“Marvellous Multi OS”
	Char:'e'
Output:	YES

Input:	String:“Marvellous Multi OS”
	Char:'W'
Output:	NO

*/




#include<iostream>

#define YES 1
#define NO 0

using namespace std;

typedef int BOOL;

class StrCharPresent
{
	public:
		BOOL Bool(char *,char);
};

BOOL StrCharPresent::Bool(char *str,char ch)
{
	if(str==NULL)
	{
		return(NO);
	}
	
	while(*str!='\0')
	{
		if(*str==ch)
		{
			break;
		}

		str++;
	}

	if(*str=='\0')
	{
		return(NO);
	}
	else
	{
		return(YES);
	}
}

int main()
{
	char arr[100]={'\0'};
	char cvalue='\0';
	BOOL bret=NO;

	cout<<"Enter the string:";
	cin.getline(arr,100);

	cout<<"Enter the character:";
	cin>>cvalue;

	StrCharPresent scpobj;

	bret=scpobj.Bool(arr,cvalue);

	if(bret==YES)
	{
		cout<<"YES,character is present in the given string.";
	}
	else
	{
		cout<<"NO,character is not present in the given string.";
	}

	return(0);
}
