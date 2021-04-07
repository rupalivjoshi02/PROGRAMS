/* Write a program which accept number from user and return multiplication of all digits.

Input:	2395
Output:	270

Input:	1018
Output:	8

Input:	9440
Output:	144

Input:	922432
Output:	864

*/




#include<iostream>

using namespace std;

class Multiplication
{
	public:
		int Return(int);
};

int Multiplication::Return(int ino)
{
	int imult=0,idig=0;

	if(ino<0)
	{
		ino=-ino;
	}

	while(ino!=0)
	{
		imult=1;

		idig=ino%10;

		if(idig!=0)
		{
			imult=imult*idig;
		}
	
		ino=ino/10;
	}

	return(imult);
}

int main()
{
	int ivalue=0,iret=0;

	cout<<"Enter the no.:";
	cin>>ivalue;

	Multiplication mobj;

	iret=mobj.Return(ivalue);

	cout<<"The multiplication of digits of the given no. is "<<iret<<"\n";

	return(0);
}
