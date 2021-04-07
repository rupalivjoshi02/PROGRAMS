/* Accept one number from user and print that number of * on screen. */




#include<iostream>

using namespace std;

class Star
{
	public:
		void Display(int);
};

void Star::Display(int ino)
{
	int i=0;

	if(ino<0)
	{
		ino=-ino;
	}

	i=1;

	while(i<=ino)
	{
		cout<<" * ";

		i++;
	}
}

int main()
{
	int ivalue=0;

	cout<<"Enter the no.:";
	cin>>ivalue;

	Star sobj;

	sobj.Display(ivalue);

	return(0);
}





