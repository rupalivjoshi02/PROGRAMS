/* Accept no. from user and reverse that no. in 2 parts.Where,1st reversed no. is even no. and 2nd is odd no..Display that both no. on screen.

Input:	2758
Output:	82 57

Input:	3759
Output:	0 9573

Input:	4682
Output:	2864 0

Input:	2088
Output:	8802 0

Input:	3098
Output:	80 93

Input:	8370
Output:	8 73

*/




#include<iostream>

using namespace std;

class EvenOddReverse
{
	public:
		void Display(int ino)
		{
			int idig=0,ieven=0,iodd=0;

			if(ino<0)
			{
				ino=-ino;
			}

			while(ino!=0)
			{
				idig=ino%10;

				if((idig%2)==0)
				{
					ieven=(ieven*10)+idig;
				}
				else
				{
					iodd=(iodd*10)+idig;
				}

				ino=ino/10;
			}

			cout<<ieven<<"\n";
			cout<<iodd<<"\n";
		}
};

int main()
{
	int ivalue=0;

	cout<<"Enter the no.:";
	cin>>ivalue;

	EvenOddReverse eorobj;

	eorobj.Display(ivalue);

	return(0);
}
