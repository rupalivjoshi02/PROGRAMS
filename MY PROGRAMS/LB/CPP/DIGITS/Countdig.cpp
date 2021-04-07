/* Accept no. from user and count no. of digits of that no.

Input:	751
Output:	3

Input:	15
Output:	1

Input:	7
Output:	1

Input:	-255
Output:	3

*/



#include<iostream>

using namespace std;

class CountDig
{
	public:
		int Return(int ino)
		{
			int i=0;

			if(ino<0)
			{
				ino=-ino;
			}

			if(ino==0)
			{
				return(1);
			}

			while(ino!=0)
			{
				i++;

				ino=ino/10;
			}

			return(i);
		}
};

int main()
{
	int ivalue=0,iret=0;

	cout<<"Enter the no.:";
	cin>>ivalue;

	CountDig cdobj;

	iret=cdobj.Return(ivalue);

	cout<<"Count of digits in the given no. is "<<iret;

	return(0);
}
