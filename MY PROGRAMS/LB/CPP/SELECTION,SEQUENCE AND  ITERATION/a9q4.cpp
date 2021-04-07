/* Write a program to find odd factorial of given number.

Input:	5
Output:	15

Input:	-5
Output:	15

Input:	10
Output:	945

*/




#include<iostream>

using namespace std;

class OddFact
{
	public:
		int Return(int ino)
		{
			int i=0,ifact=1;

			if(ino<0)
			{
				ino=-ino;
			}

			for(i=1;i<=ino;i++)
			{
				if((i%2)!=0)
				{
					ifact=ifact*i;
				}
			}
			
			return(ifact);
		}		
};

int main()
{
	int ivalue=0,iret=0;

	cout<<"Enter the no.:";
	cin>>ivalue;

	OddFact ofobj;

	iret=ofobj.Return(ivalue);

	cout<<"Odd factorials of a given no. is "<<iret;

	return(0);
}
