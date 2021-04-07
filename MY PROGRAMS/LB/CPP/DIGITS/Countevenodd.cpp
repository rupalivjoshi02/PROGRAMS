/* Accept no. from user and count the all even and odd digits in that no.. 

Input:	753
Output:	0 3

Input:	222
Output:	3 0

Input:	2678
Output:	3 1

Input:	1008
Output:	3 1

Input:	0
Output:	1 0

*/




#include<iostream>

using namespace std;

class Count
{
	public:
		void Display(int ino)
		{
			int idig=0,iodd=0,ieven=0;

			if(ino<0)
			{
				ino=-ino;
			}
	
			if(ino==0)
			{
				cout<<" 1 0";
			}

			while(ino!=0)
			{
				idig=ino%10;

				if((idig%2)==0)
				{
					ieven++;
				}
				else
				{
					iodd++;
				}

				ino=ino/10;
			}

			cout<<"\nEven no.:"<<ieven;
			cout<<"\nOdd no.:"<<iodd;
		}
};

int main()
{
	int ivalue=0;

	cout<<"Enter the no.:";
	cin>>ivalue;

	Count cobj;
	
	cobj.Display(ivalue);

	return(0);
}
