/* Accept on character from user and check whether that character is vowel (a,e,i,o,u) or not.

Input: E
Output:	YES

Input: d
Output:	NO

*/




#include<iostream>

#define YES 1
#define NO 0

using namespace std;

typedef int BOOL;

class Vowel
{
	public:
		BOOL Bool(char ch)
		{
			if((ch=='a') || (ch=='e') || (ch=='i') || (ch=='o') || (ch=='u') || (ch=='A') || (ch=='E') || (ch=='I') || (ch=='O') || (ch=='U'))
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

	Vowel vobj;

	bret=vobj.Bool(cvalue);
	
	if(bret==YES)
	{
		cout<<"Given character is vowel";
	}
	else
	{
		cout<<"Given character is not vowel";
	}

	return(0);
}
