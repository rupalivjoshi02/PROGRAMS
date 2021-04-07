/* Write a program which returns difference between Even factorial and odd factorial of given number.

Input:	5
Output:	-7 (8-15)

Input:	-5
Output:	-7 (8-15)

Input:	10
Output:	2895 (3840 - 945)

*/




#include<iostream>

using namespace std;

class Difference
{
	public:
		int Return(int ino)
		{
			int i=0,iodd=1,ieven=1,idiff=0;

			if(ino<0)
			{
				ino=-ino;
			}

			for(i=1;i<=ino;i++)
			{
				if((i%2)!=0)
				{
					iodd=iodd*i;
				}
				else
				{
					ieven=ieven*i;
				}
			}

			idiff=ieven-iodd;
			
			return(idiff);
		}		
};

int main()
{
	int ivalue=0,iret=0;

	cout<<"Enter the no.:";
	cin>>ivalue;

	Difference dobj;

	iret=dobj.Return(ivalue);

	cout<<"Difference between even and odd factorials of a given no. is  "<<iret;

	return(0);
}
