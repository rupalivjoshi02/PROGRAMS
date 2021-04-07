/* Write a program which accept number from user and return difference between summation of even digits and summation of odd digits.

Input:	2395
Output:	-15 (2-17)

Input:	1018
Output:	6(8 - 2)

Input:	8440
Output:	16 (16 - 0)

Input:	5733
Output:	-18 (0 - 18)

*/




#include<iostream>

using namespace std;

class Difference
{
	public:
		int ieven=0,idig=0,iodd=0;

	public:
		int Return(int);
};

int Difference::Return(int ino)
{
	if(ino<0)
	{
		ino=-ino;
	}

	while(ino!=0)
	{
		idig=ino%10;

		if((idig%2)==0)
		{
			ieven=ieven+idig;
		}
		else
		{
			iodd=iodd+idig;
		}

		ino=ino/10;
	}

	return(ieven-iodd);
}

int main()
{
	int ivalue=0,iret=0;

	cout<<"enter the no.:";
	cin>>ivalue;

	Difference dobj;

	iret=dobj.Return(ivalue);

	cout<<"The difference between summations of even and odd digits of the given no. is "<<iret;

	return(0);
}
