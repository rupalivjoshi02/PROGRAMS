/* Write a program which accept number from user and if number is less than 50 then print small , if it is greater than 50 and less than 100 then print medium, if it is greater than 100 then print large.

Input:	75
Output:	Medium

*/




#include<iostream>

using namespace std;

class Print
{
	public:
		void Display(int);
};

void Print::Display(int ino)
{
	if(ino<0)
	{
		ino=-ino;
	}

	if(ino<=50)
	{
		cout<<"Small";
	}
	else if((ino>50) && (ino<=100))
	{
		cout<<"Medium";
	}
	else
	{
		cout<<"Large";
	}
}

int main()
{
	int ivalue=0;

	cout<<"Enter the no.:";
	cin>>ivalue;

	Print pobj;

	pobj.Display(ivalue);

	return(0);
}
