/* Accept no. from user and count the all such digits which are divisible by 3 int that no.. 

Input:	750
Output:	35

Input:	152
Output:	10

Input:	7000
Output:	7

Input:	153
Output:	15

*/




#include<iostream>

using namespace std;

class Product
{
	public:
		int Return(int ino)
		{
			int imult=1,idig=0;

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

				if(idig>0)
				{
					imult=imult*idig;
				}

				ino=ino/10;
			}

			return(imult);
		}
};

int main()
{
	int ivalue=0,iret=0;

	cout<<"Enter the no.:";
	cin>>ivalue;

	Product pobj;

	iret=pobj.Return(ivalue);

	cout<<"Product of all digits in the given no. is "<<iret;

	return(0);
}
