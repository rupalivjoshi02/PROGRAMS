/* Accept single digit number from user and print it into word.

Input:	9
Output:	Nine 

Input:	-3
Output:	Three

Input:	12
Output:	Invalid output

*/




#include<iostream>

using namespace std;

class DigWord
{
	public:
		void Display(int);
};

void DigWord::Display(int ino)
{
	if(ino<0)
	{
		ino=-ino;
	}

	if(ino>9)
	{
		cout<<"Invalid input.";
	}

	switch(ino)
	{
		case 1:
			if(ino==0)
			{
				cout<<"Zero.";

				break;
			}

		case 2:
			if(ino==1)
			{
				cout<<"One.";

				break;
			}

		case 3:
			if(ino==2)
			{
				cout<<"Two.";

				break;
			}

		case 4:
			if(ino==3)
			{
				cout<<"Three.";

				break;
			}

		case 5:
			if(ino==4)
			{
				cout<<"Four.";

				break;
			}

		case 6:
			if(ino==5)
			{
				cout<<"Five.";

				break;
			}

		case 7:
			if(ino==6)
			{
				cout<<"Six.";

				break;
			}

		case 8:
			if(ino==7)
			{
				cout<<"Seven.";

				break;
			}

		case 9:
			if(ino==8)
			{
				cout<<"Eight.";

				break;
			}

		case 10:
			if(ino==9)
			{
				cout<<"Nine.";

				break;
			}
	}
}

int main()
{
	int ivalue=0;

	cout<<"Enter the no.:";
	cin>>ivalue;

	DigWord dwobj;

	dwobj.Display(ivalue);

	return(0);
}
