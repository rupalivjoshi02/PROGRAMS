/* Write a program which accept number from user and return difference between summation of all its factors and non factors.

Input:	12
Output:	34 (16-50)
	
Input:	10
Output:	-29 (8-37)

*/




#include<iostream>

using namespace std;

class Difference
{
	public:
		int Return(int ino)
		{
			int i=0,isum1=0,isum2=0;

			if(ino<0)
			{
				ino=-ino;
			}

			for(i=1;i<ino;i++)
			{
				if((ino%i)!=0)
				{
					isum1=isum1+i;
				}
				else
				{
					isum2=isum2+i;
				}
			}

			return(isum2-isum1);
		}
};

int main()
{
	int ivalue=0,iret=0;

	cout<<"Enter the no.:";
	cin>>ivalue;

	Difference dobj;

	iret=dobj.Return(ivalue);

	cout<<"Difference between factors and non factors of a no. is "<<iret;

	return(0);
}
