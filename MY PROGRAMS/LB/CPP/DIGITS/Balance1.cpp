/* Accept no. from user and check whether that no. is balance no. or not.(Use only single counter)
   Balanced no. is such no. in which the freq. of even no. is same as freq. of odd no.. 

Input:	5278
Output:	YES

Input:	111
Output:	NO

Input:	2222
Output:	NO

Input:	2277
Output:	YES

*/




#include<iostream>

#define YES 1
#define NO 0

using namespace std;

typedef int BOOL;

class Balance
{
	public:
		BOOL Bool(int ino)
		{
			int idig=0,icnt=0;

			if(ino<0)
			{
				ino=-ino;
			}

			if(ino==0)
			{
				return(NO);
			}

			while(ino!=0)
			{
				idig=ino%10;

				if((idig%2)==0)
				{
					icnt++;
				}
				else
				{
					icnt--;
				}

				ino=ino/10;
			}

			if(icnt==0)
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

	Balance bobj;

	bret=bobj.Bool(ivalue);

	if(bret==YES)
	{
		cout<<"The given no. is balanced no..";
	}
	else
	{
		cout<<"The given no. is unbalanced no..";
	}

	return(0);
}
