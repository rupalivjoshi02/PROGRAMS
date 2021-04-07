/*	7. Write a program to find maximum of two numbers using procedural approach (C) and object oriented approach (C++).	*/




#include<iostream>

using namespace std;

class MaximumNo
{
	public:
		void Display(int ino1,int ino2)
		{
			if(ino1<ino2)
			{
				cout<<"\nMaximum no. is \n"<<ino2;
			}
			else if(ino1>ino2)
			{
				cout<<"\nMaximum no. is \n"<<ino1;
			}
			else
			{
				cout<<"\nBoth no. are same.\n";
			}
		}
};

int main()
{
	int ivalue1=0,ivalue2=0;

	cout<<"\nEnter 2 no.: \n";
	cin>>ivalue1>>ivalue2;

	MaximunNo mnobj;

	mnobj.Display(ivalue1,ivalue2);

	return(0);
}
