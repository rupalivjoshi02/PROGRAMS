/* Write a program which accept number from user and count frequency of such a digits which are less than 6.

Input:	2395
Output:	3

Input:	1018
Output:	3

Input:	96672
Output:	1

Input:	9440
Output:	3

*/




#include<iostream>

using namespace std;

class CountLessThanSix
{
	public:
		int Return(int);
};

int CountLessThanSix::Return(int ino)
{
	int idig=0,icnt=0;

	if(ino<0)
	{
		ino=-ino;
	}

	while(ino!=0)
	{
		idig=ino%10;

		if(idig<6)
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

	CountLessThanSix cltsobj;

	iret=cltsobj.Return(ivalue);

	cout<<"The freq. of such a no. which is less than 6 in the given no. is "<<iret;

	return(0);
}
	
