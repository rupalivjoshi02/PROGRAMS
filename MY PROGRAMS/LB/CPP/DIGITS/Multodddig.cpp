/* Accept no. from user and return the summation of digits of that digits which are greater than 5. 

Input:	2681
Output:	1

Input:	731
Output:	21

Input:	-731
Output:	21

Input:	2266
Output:	0

Input:	1111
Output:	1

*/




#include<iostream>

using namespace std;

class MultOddDig
{
	public:
		int Return(int ino)
		{
			int idig=0,imult=0;

			if(ino<0)
			{
				ino=-ino;
			}

			while(ino!=0)
			{
				idig=ino%10;

				if((idig%2)!=0)
				{
					imult=1;

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

	MultOddDig modobj;

	iret=modobj.Return(ivalue);

	cout<<"Multiplication of odd digits in the given no. is "<<iret;

	return(0);
}
