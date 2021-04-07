/* Accept no. from user and count the all such digits which are divisible by 3 int that no.. 

Input:	369
Output:	3

Input:	311
Output:	1

Input:	1526
Output:	1

Input:	7757
Output:	0

Input:	3333
Output:	4

*/




#include<iostream>

using namespace std;

class CountDivBy3
{
	public:
		int Return(int ino)
		{
			int i=0,idig=0;

			if(ino<0)
			{
				ino=-ino;
			}

			while(ino!=0)
			{
				idig=ino%10;

				if((idig%3)==0)
				{
					i++;
				}

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

	CountDivBy3 cdbobj;

	iret=cdbobj.Return(ivalue);

	cout<<"Count of that digits which are dividible by 3 in the given no. is "<<iret;

	return(0);
}
