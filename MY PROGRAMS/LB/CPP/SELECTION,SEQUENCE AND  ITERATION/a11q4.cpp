/* Write a program which accept range from user and return addition of all even numbers in between that range. (Range should contains positive numbers only)

Input:	23 30
Output:	108

Input:	10 18
Output:	70

Input:	-10 2
Output:	Invalid input

Input:	90 18
Output:	Invalid input

*/




#include<iostream>

using namespace std;

class EvenSumRange
{
	public:
		int Return(int ino1,int ino2)
		{
			int i=0,isum=0;

			if(ino1>ino2)
			{
				cout<<"Invalid input.";
			}

			if((ino1<0) || (ino2<0))
			{
				cout<<"Invalid input.";
			}
			else
			{
				for(i=ino1;i<=ino2;i++)
				{
					if((i%2)==0)
					{
						isum=isum+i;
					}
				}
			}

			return(isum);
		}
};

int main()
{
	int ivalue1=0,ivalue2=0,iret=0;

	cout<<"Enter the 2 no.:";
	cin>>ivalue1>>ivalue2;

	EvenSumRange esrobj;
	
	iret=esrobj.Return(ivalue1,ivalue2);

	cout<<"\nSummation of all even no. in between range is "<<iret;

	return(0);
}
