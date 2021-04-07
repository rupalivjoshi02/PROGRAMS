/* Write a program which accept string from user and check whether it contains vowels in it or not.

Input:	“marvellous”
Output:	YES

Input:	“Demo”
Output:	YES

Input:	“xyz”
Output:	NO

*/




#include<iostream>

#define YES 1
#define NO 0

using namespace std;

typedef int BOOL;

class StrVowel
{
	public:
		BOOL Bool(char*);
};

BOOL StrVowel::Bool(char *str)
{
	if(str==NULL)
	{
		return(NO);
	}

	while(*str!='\0')
	{
		if((*str=='a') || (*str=='e') || (*str=='i') || (*str=='o') || (*str=='u') || (*str=='A') || (*str=='E') || (*str=='I') || (*str=='O') || (*str=='U'))
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
	BOOL bret=NO;

	cout<<"Enter the string:";
	cin.getline(arr,100);

	StrVowel svobj;

	bret=svobj.Bool(arr);

	if(bret==YES)
	{
		cout<<"YES,string contains vowel.";
	}
	else
	{
		cout<<"NO,string does not contains vowel.";
	}

	return(0);
}
