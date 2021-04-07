/* Accept no. from user and count the frequency of 7 in that no.. 

Input:	711
Output:	1

Input:	952
Output:	0

Input:	777
Output:	3

Input:	-753
Output:	1

*/




#include<iostream>

using namespace std;

class Freqof7
{
	public:
		int Return(int ino)
		{
			int idig=0,i=0;

			if(ino<0)
			{
				ino=-ino;
			}

			while(ino!=0)
			{
				idig=ino%10;

				if(idig==7)
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

	cout<<"enter the no.:";
	cin>>ivalue;

	Freqof7 fobj;
	
	iret=fobj.Return(ivalue);

	cout<<"Freq of 7 in the given no. is "<<iret;

	return(0);
}
