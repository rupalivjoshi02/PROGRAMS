/* Write a program to read 2 no. from the kyboard and display the larger value on the screen. */




#include<iostream>

using namespace std;

class LargeNo
{
	public:
		void Display(int ino1,int ino2)
		{
			if(ino1>ino2)
			{
				cout<<ino1;
			}
			else
			{
				cout<<ino2;
			}
		}
};

int main()
{
	int ivalue1=0,ivalue2=0;

	cout<<"Enter 2 no.:";
	cin>>ivalue1>>ivalue2;

	LargeNo lnobj;

	lnobj.Display(ivalue1,ivalue2);

	return(0);
}

