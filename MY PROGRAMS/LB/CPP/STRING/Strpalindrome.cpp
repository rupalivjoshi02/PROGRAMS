/* Accept string from user and check whether that string is palindrome or not.

Input:	abccba
Output:	YES

Input:	abccwa
Output:	NO

*/




#include<iostream>

#define YES 1
#define NO 0

using namespace std;

typedef int BOOL;

class StrPalindrome
{
	public:
		BOOL Bool(char *str)
		{
			char *src=NULL,*dest=NULL;

			if(str==NULL)
			{
				return(NO);
			}

			src=str;
			dest=str;

			while(*dest!='\0')
			{
				dest++;
			}

			dest--;

			while(src<dest)
			{
				if(*src!=*dest)
				{
					break;
				}

				src++;
				dest--;
			}

			if(src<dest)
			{
				return(NO);
			}
			else
			{
				return(YES);
			}
		}
};

int main()
{
	char arr[100]={'\0'};
	BOOL bret=NO;

	cout<<"Enter the string:";
	cin.getline(arr,100);

	StrPalindrome spobj;

	bret=spobj.Bool(arr);

	if(bret==YES)
	{
		cout<<"YES,string is palindrome.";
	}
	else
	{
		cout<<"NO,string is not palindrome.";
	}

	return(0);
}
