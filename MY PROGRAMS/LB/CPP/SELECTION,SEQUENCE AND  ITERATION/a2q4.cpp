/*Accept two numbers from user and display first number in second number of times. 

Input:	12 5
Output:	12 12 12 12 12

Input:	-2 3
Output:	-2 -2 -2

Input:	21 -3
Output:	21 21 21

Input:	-2 0
Output:	

*/




#include<iostream>

using namespace std;

class Number
{
	public:
		void Display(int,int);
};

void Number::Display(int ino1,int ino2)
{
	int i=0;

	if(ino2<0)
	{
		ino2=-ino2;
	}

	for(i=1;i<=ino2;i++)
	{
		cout<<ino1<<"\t";
	}
}

int main()
{
	int ivalue1=0,ivalue2=0;

	cout<<"Enter the 2 no.:";
	cin>>ivalue1>>ivalue2;

	Number nobj;

	nobj.Display(ivalue1,ivalue2);

	return(0);
}





