/* Accept string from user and compare content of that string.

Input:	1st String: ancd
	2nd String: abcd
Output:	YES

Input:	1st String: ancd
	2nd String: abcde
Output:	NO

Input:	1st String: ancde
	2nd String: abcdef
Output:	NO

Input:	1st String: ancd
	2nd String: ABCD
Output:	NO

*/




#include<iostream>

#define YES 1
#define NO 0

using namespace std;

typedef int BOOL;

class StrCompare
{
	public:
		BOOL Bool(char *str1,char *str2)
		{
			if((str1==NULL) || (str2==NULL))
			{
				return(NO);
			}

			while((*str1!='\0') && (*str2!='\0'))
			{
				if(*str1!=*str2)
				{
					break;
				}

				str1++;
				str2++;
			}

			if((*str1=='\0') && (*str2=='\0'))
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
	char arr[100]={'\0'};
	char brr[100]={'\0'};
	BOOL bret=NO;

	cout<<"Enter the 1st string:";
	cin.getline(arr,100);

	cout<<"Enter the 2nd string:";
	cin.getline(brr,100);

	StrCompare scobj;

	bret=scobj.Bool(arr,brr);

	if(bret==YES)
	{
		cout<<"YES,both strings are equal.";
	}
	else
	{
		cout<<"NO, both strings are not equal.";
	}

	return(0);
}
