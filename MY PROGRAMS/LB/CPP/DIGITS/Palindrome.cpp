/* Accept no. from user and check whether that no. is palindrome or not by using 2 functions.

Input:	747
Output:	YES

Input:	7337
Output:	YES

Input:	1531
Output:	NO

Input:	7770
Output:	NO

Input:	7007
Output:	YES

Input:	8
Output:	YES

*/




#include<iostream>

#define YES 1
#define NO 0

using namespace std;

typedef int BOOL;

class Palindrome
{
	public:
		int Return(int ino)
		{
			int idig=0,irev=0;

			if(ino<0)
			{
				ino=-ino;
			}

			while(ino!=0)
			{
				idig=ino%10;
				irev=(irev*10)+idig;
				ino=ino/10;
			}

			return(irev);
		}

		BOOL Bool(int ino)
		{
			int temp=0;

			if(ino<0)
			{
				ino=-ino;
			}

			temp=Return(ino);
;
			if(temp==ino)
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
	int ivalue=0,iret=0;
	BOOL bret=0;

	cout<<"Enter the no.:";
	cin>>ivalue;

	Palindrome pobj;

	iret=pobj.Return(ivalue);
	bret=pobj.Bool(ivalue);

	if(bret==YES)
	{
		cout<<"The given no. is Palindrome.";
	}
	else
	{
		cout<<"The given no. is not palindrome.";
	}

	return(0);
}
