/* Accept no. from user and return its reverse of that no. which is only contains odd no..

Input:	135
Output:	531

Input:	24666
Output:	0

Input:	2435
Output:	53

Input:	1674
Output:	71

Input:	3566
Output:	53

Input:	3007
Output:	73

*/




#include<iostream>

using namespace std;

class OddReverse
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

				if((idig%2)!=0)
				{
					irev=(irev*10)+idig;
				}

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

	OddReverse orobj;

	iret=orobj.Return(ivalue);

	cout<<"Reversed no. which contains odd no. is "<<iret;

	return(0);
}

