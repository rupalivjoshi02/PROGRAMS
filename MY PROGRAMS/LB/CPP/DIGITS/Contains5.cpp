/* Accept no. from user and check whether that no. contains 5 or not.

Input:	3321
Output:	NO

Input:	5392
Output:	YES

Input:	5395
Output:	YES

Input:	3529
Output:	YES

Input:	1249752
Output:	YES

*/




#include<iostream>

#define YES 1
#define NO 0

using namespace std;

typedef int BOOL;

class Contains5
{
	public:
		BOOL Bool(int ino)
		{
			int idig=0;

			if(ino<0)
			{
				ino=-ino;
			}

			while(ino!=0)
			{
				idig=ino%10;

				if(idig==5)
				{
					break;
				}

				ino=ino/10;
			}

			if(idig==5)
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
	int ivalue=0;
	BOOL bret=NO;

	cout<<"Enter the no.:";
	cin>>ivalue;

	Contains5 cobj;

	bret=cobj.Bool(ivalue);

	if(bret==YES)
	{
		cout<<"The given no. contains no. 5.";
	}
	else
	{
		cout<<"The given no. does not contains no. 5.";
	}

	return(0);
}
