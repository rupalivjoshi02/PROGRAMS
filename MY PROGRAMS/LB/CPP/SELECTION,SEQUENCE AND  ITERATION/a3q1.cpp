/* Write a program which accept one number from user and print that number of even numbers on screen.

Input: 7
Output:	2 4 6 8 10 12 14 

*/




#include<iostream>

using namespace std;

class Even
{
	public:
		int i=0,imult=1;

	public:
		void Display(int ino)
		{
			if(ino<0)
			{
				ino=-ino;
			}

			i=1;

			while(i<=ino)
			{
				imult=i*2;

				cout<<imult<<"\t";

				i++;
			}
		}
};

int main()
{
	int ivalue=0;

	cout<<"Enter the no.:";
	cin>>ivalue;

	Even eobj;

	eobj.Display(ivalue);

	return(0);
}
