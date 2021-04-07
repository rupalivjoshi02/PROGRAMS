/* Accept no. from user and return the summation of its all factors.

Input:	10
Output:	10

Input:	-10
Output:	8 

Input:	7
Output:	1

Input:	0 
Output:	0

*/




#include<iostream>

using namespace std;

class SumFact
{
	public:
		int Return(int ino)
		{
			int i=0,isum=0;

			if(ino<0)
			{
				ino=-ino;
			}

			for(i=1;i<=(ino/2);i++)
			{
				if((ino%i)==0)
				{
					isum=isum+i;
				}
			}

			return(isum);
		}
};

int main()
{
	int ivalue=0,iret=0;

	cout<<"Enter the no.;";
	cin>>ivalue;

	SumFact sfobj;

	iret=sfobj.Return(ivalue);

	cout<<"Summation of all factors is "<<iret;

	return(0);
}

