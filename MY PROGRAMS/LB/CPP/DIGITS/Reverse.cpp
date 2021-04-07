/* Accept no. from user and return the reverse of that no..

Input:	157
Output:	751

Input:	2310
Output:	132

Input:	7000
Output:	7

Input:	-751
Output:	157

Input:	1032
Output:	2301

*/




#include<iostream>

using namespace std;

class Reverse
{
	public:
		int Return(int ino)
		{
			int idig=0,irev=0;

			if(ino<0)
			{
				ino=-ino;
			}

			if(ino==0)
			{
				return(0);
			}

			while(ino!=0)
			{
				idig=ino%10;
				irev=(irev*10)+idig;
				ino=ino/10;
			}

			return(irev);
		}
};

int main()
{
	int ivalue=0,iret=0;

	cout<<"Enter the no.:";
	cin>>ivalue;

	Reverse robj;

	iret=robj.Return(ivalue);

	cout<<"Reversed no. is "<<iret;

	return(0);
}
