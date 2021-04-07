/* Write a program which accept three numbers and print its multiplication.

Input:	5 4 7
Output:	140

Input:	5 0 7
Output:	35

Input:	5 0 0
Output:	5

Input:	0 0 0
Output:	0

*/




#include<iostream>

using namespace std;

class Multiplication
{
	public:
		int Return(int,int,int);
};

int Multiplication::Return(int ino1,int ino2,int ino3)
{
	int imult=1;

	if((ino1==0) && (ino2!=0) && (ino3!=0))
	{
		imult=ino2*ino3;
	}
	else if((ino1!=0) && (ino2==0) && (ino3!=0))
	{
		imult=ino1*ino3;
	}
	else if((ino1!=0) && (ino2!=0) && (ino3==0))
	{
		imult=ino2*ino1;
	}
	else if((ino1==0) && (ino2==0) && (ino3!=0))
	{
		imult=ino3;
	}
	else if((ino1==0) && (ino2!=0) && (ino3==0))
	{
		imult=ino2;
	}
	else if((ino1!=0) && (ino2==0) && (ino3==0))
	{
		imult=ino1;
	}
	else if((ino1==0) && (ino2==0) && (ino3==0))
	{
		imult=0;
	}
	else
	{	
		imult=ino1*ino2*ino3;
	}

	return(imult);
}

int main()
{
	 int ivalue1=0,ivalue2=0,ivalue3=0,iret=0;

	cout<<"Enter 3 no.:";
	cin>>ivalue1>>ivalue2>>ivalue3;

	Multiplication mobj;

	iret=mobj.Return(ivalue1,ivalue2,ivalue3);

	cout<<"Multiplication is "<<iret;

	return(0);
}
