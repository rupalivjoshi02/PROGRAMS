/* Accept no. from user and return that no. in reverse format.Revrse no. should contains digits from the original no. which are in between 3 and 7.

Input:	464
Output:	464

Input:	1389
Output:	0 

Input:	7259
Output:	5

Input:	3065
Output:	56

*/




#include<iostream>

using namespace std;

class ReverseBetweenRange
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

				if((idig>3) && (idig<7))
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

	ReverseBetweenRange rbrobj;

	iret=rbrobj.Return(ivalue);

	cout<<"Reversed no. in between range is "<<iret;

	return(0);
}

