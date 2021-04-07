/* Accept no. from user and return its largest factor.

Input:	12
Output:	6 

Input:	13
Output:	1
	
Input:	25
Output:	5

Input:	100
Output:	50

Input:	27
Output:	9

*/




#include<iostream>

using namespace std;

class LargeFact
{
	public:
		int Return(int ino)
		{
			int i=0;

			if(ino<0)
			{
				ino=-ino;
			}

			for(i=(ino/2);i>0;i--)
			{
				if((ino%i)==0)
				{
					break;
				}
			}

			return(i);
		}
};

int main()
{
	int ivalue=0,iret=0;

	cout<<"Enter the no.:";
	cin>>ivalue;

	LargeFact lfobj;

	iret=lfobj.Return(ivalue);

	cout<<"Largest factor is "<<iret;

	return(0);
}
