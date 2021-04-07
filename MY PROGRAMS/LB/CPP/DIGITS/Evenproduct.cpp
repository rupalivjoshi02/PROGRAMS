/* Accept no. from user and return the product of even digits in that no..

Input:	753
Output:	0

Input:	275
Output:	0

Input:	2167
Output:	12

Input:	2016
Output:	12

Input:	10000
Output:	0

*/




#include<iostream>

using namespace std;

class EvenProduct
{
	public:
		int Return(int ino)
		{
			int idig=0,imult=1;

			if(ino<0)
			{
				ino=-ino;
			}

			while(ino!=0)
			{
				idig=ino%10;

				if(((idig%2)==0) && (idig!=0))
				{
					imult=imult*idig;
				}

				ino=ino/10;
			}

			if(imult==1)
			{
				imult=0;
			}
	
			return(imult);
		}
};

int main()
{
	int ivalue=0,iret=0;

	cout<<"Enter the no.:";
	cin>>ivalue;

	EvenProduct epobj;

	iret=epobj.Return(ivalue);

	cout<<"Product of even digits of the given no. is "<<iret;

	return(0);
}
