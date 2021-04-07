/* Write a program which accept number from user and return summation of all its non factors.

Input:	12
Output:	50
	
Input:	10
Output:	37

*/




#include<iostream>

using namespace std;

class NonFactSum
{
	public:
		int Return(int ino)
		{
			int i=0,isum=0;

			if(ino<0)
			{
				ino=-ino;
			}

			for(i=1;i<ino;i++)
			{
				if((ino%i)!=0)
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

	cout<<"Enter the no.:";
	cin>>ivalue;

	NonFactSum nfsobj;

	iret=nfsobj.Return(ivalue);

	cout<<"Summation of all non factors of a no. is "<<iret;

	return(0);
}
