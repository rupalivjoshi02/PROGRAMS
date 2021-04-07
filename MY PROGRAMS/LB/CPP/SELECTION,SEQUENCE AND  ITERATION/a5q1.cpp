/* Write a program which accept number from user and display its multiplication of factors.

Input:	12
Output:	144

Input:	13
Output:	1
	
Input:	10
Output:	10

*/




#include<iostream>

using namespace std;

class MultFact
{
	public:
		void Display(int ino)
		{
			int i=0,imult=1;

			if(ino<0)
			{
				ino=-ino;
			}

			for(i=1;i<=(ino/2);i++)
			{
				if((ino%i)==0)
				{
					imult=imult*i;
				}
			}

			cout<<imult;
		}
};

int main()
{
	int ivalue=0;

	cout<<"Enter the no.:";
	cin>>ivalue;

	MultFact mfobj;

	mfobj.Display(ivalue);

	return(0);
}
