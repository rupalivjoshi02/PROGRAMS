/* Accept one number from user and print that number of * on screen. */




#include<iostream>

using namespace std;

class Star
{
	public:
		void Display(int ino)
		{
			int i=0;

			if(ino<0)
			{
				ino=-ino;
			}

			for(i=1;i<=ino;i++)
			{
				cout<<" * ";
			}
		}
};

int main()
{
	int ivalue=0;

	cout<<"Enter the no.:";
	cin>>ivalue;

	Star sobj;

	sobj.Display(ivalue);

	return(0);
}





