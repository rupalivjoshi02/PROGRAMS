/* Write a program to find factorial of given number.

Input:	4
Output:	24 

Input:	5
Output:	120

Input:	-5
Output:	120

*/




#include<iostream>

using namespace std;

class Factorial
{
	public:
		int i=0,imult=1;

	public:
		int Return(int);
};

int Factorial::Return(int ino)
{
	if(ino<0)
	{
		ino=-ino;
	}

	for(i=1;i<=ino;i++)
	{
		imult=imult*i;
	}

	return(imult);
}

int main()
{
	int ivalue=0,iret=0;

	cout<<"Enter the no.:";
	cin>>ivalue;

	Factorial fobj;

	iret=fobj.Return(ivalue);

	cout<<"Factorial of a no. is "<<iret;

	return(0);
}
