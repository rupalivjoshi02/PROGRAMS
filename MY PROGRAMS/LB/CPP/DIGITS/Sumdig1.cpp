/* Accept no. from user and return the summation of digits of that digits which are greater than 5. 

Input:	751
Output:	7

Input:	23
Output:	0

Input:	995
Output:	18

Input:	7698
Output:	30

Input:	0
Output:	0

Input:	-751
Output:	7

*/




#include<iostream>

using namespace std;

class SumDig
{
	public:
		int Return(int ino)
		{
			int isum=0,idig=0;

			if(ino<0)
			{
				ino=-ino;
			}

			while(ino!=0)
			{
				idig=ino%10;

				if(idig>5)
				{
					isum=isum+idig;
				}

				ino=ino/10;
			}

			return(isum);
		}
};

int main()
{
	int ivalue=0,iret=0;

	cout<<"Enter the no.:";
	cin>>ivalue;

	SumDig sdobj;

	iret=sdobj.Return(ivalue);

	cout<<"Summation of digits of the given no. which is greater than 5 is "<<iret;

	return(0);
}

