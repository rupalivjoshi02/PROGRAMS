/* Write a program which is used to perform power operation we have to accept 2 no. as x and y and return the result x^y.

Input:	10 2
Output:	100

Input:	10 -2
Output:	100

Input:	2 4
Output:	16

Input:	-2 -4
Output:	16

Input:	15 1
Output:	15

Input:	24 0
Output:	1

*/




#include<iostream>

using namespace std;

typedef unsigned long int UNSIGNED;

class Power
{
	public:
		UNSIGNED Return(int ino1,int ino2)
		{
			int i=0,imult=1;

			if(ino1<0)
			{
				ino1=-ino1;
			}

			if(ino2<0)
			{
				ino2=-ino2;
			}

			for(i=1;i<=ino2;i++)
			{
				imult=ino1*imult;
			}

			return(imult);
		}
};

int main()
{
	int ivalue1=0,ivalue2=0,iret=0;

	cout<<"Enter the 2 no.:";
	cin>>ivalue1>>ivalue2;

	Power pobj;

	iret=pobj.Return(ivalue1,ivalue2);

	cout<<"The result is "<<iret;

	return(0);
}

