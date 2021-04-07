/* Accept 3 no. from user and return the largest no..

Input:	15 10 21
Output:	21

Input:	15 15 15
Output:	15

Input:	15 4 15
Output:	15

Input:	0 0 0
Output:	0

Input:	-15 -10 -21
Output:	-10

Input:	40 0 -40
Output:	40

Input:	15 51 51
Output:	51

*/




#include<iostream>

using namespace std;

class Largest
{
	public:
		int Return(int ino1,int ino2,int ino3)
		{
			if((ino1>=ino2) && (ino1>=ino3))
			{
				return(ino1);
			}
			else if((ino2>=ino1) && (ino2>=ino3))
			{
				return(ino2);
			}
			else
			{
				return(ino3);
			}
		}
};

int main()
{
	int ivalue1=0,ivalue2=0,ivalue3=0,iret=0;

	cout<<"Enter 3 no.:";
	cin>>ivalue1>>ivalue2>>ivalue3;

	Largest lobj;

	iret=lobj.Return(ivalue1,ivalue2,ivalue3);

	cout<<"Largest no. is "<<iret;

	return(0);
}

