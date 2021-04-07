/* Program to divide two numbers */




#include<iostream>

using namespace std;

class Addition
{
	public:
		int Return(int ino1,int ino2)
		{
			int ians=0;

			ians=ino1+ino2;

			return(ians);
		}
};

int main()
{
	int ivalue1=0,ivalue2=0,iret=0;

	cout<<"Enter the 2 no.:";
	cin>>ivalue1>>ivalue2;

	Addition aobj;

	iret=aobj.Return(ivalue1,ivalue2);

	cout<<"Addition is "<<iret;

	return(0);
}
