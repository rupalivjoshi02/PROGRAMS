/* Accept no. from user and return the summation of digits of that no.. 

Input:	0
Output:	0

Input:	7
Output:	7

Input:	53
Output:	8

Input:	751
Output:	13

Input:	-751
Output:	13

Input:	1007
Output:	8

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
				isum=isum+idig;
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

	cout<<"Summation of digits in the given no. is "<<iret;

	return(0);
}
