/* Accept 2 no. from user and return the largest no..

Input:	15 21
Output:	21

Input:	0 15
Output:	15

Input:	-15 -21
Output:	-15

Input:	-15 51
Output:	51

Input:	21 21
Output:	21

*/




#include<iostream>

using namespace std;

class Largest
{
	public:
		int Return(int ino1,int ino2)
		{
			if(ino1>ino2)
			{
				return(ino1);
			}
			else
			{	
				return(ino2);
			}
		}
};

int main()
{
	int ivalue1=0,ivalue2=0,iret=0;

	cout<<"Enter the 2 no.:";
	cin>>ivalue1>>ivalue2;

	Largest lobj;

	iret=lobj.Return(ivalue1,ivalue2);

	cout<<"Largest no. is "<<iret;

	return(0);
}
