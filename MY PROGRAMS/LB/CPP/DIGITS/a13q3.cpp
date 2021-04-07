/* Write a program which accept number from user and return the count of digits in between 3 and 7.

Input:	2395
Output:	1

Input:	1018
Output:	0

Input:	4521
Output:	2

Input:	9922
Output:	0

*/




#include<iostream>

using namespace std;

class CountBetween3and7
{
	public:
		int Return(int);
};

int CountBetween3and7::Return(int ino)
{
	int icnt=0,idig=0;

	if(ino<0)
	{
		ino=-ino;
	}

	while(ino!=0)
	{
		idig=ino%10;

		if((idig>3) && (idig<7))
		{
			icnt++;
		}
	
		ino=ino/10;
	}

	return(icnt);
}

int main()
{
	int ivalue=0,iret=0;

	cout<<"Enter the no.:";
	cin>>ivalue;

	CountBetween3and7 cbobj;

	iret=cbobj.Return(ivalue);

	cout<<"The freq. of digits between 3 and 7 in the given no. is "<<iret;

	return(0);
}
