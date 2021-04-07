/* Write a program that inputs a character from kyeboard and display its corresponding ASCII value on the screen. */




#include<iostream>

using namespace std;

class ASCII
{
	public:
		void Display()
		{
			char ch='\0';

			cout<<"Enter a character:\n";
			cin>>ch;
	
			cout<<"ASCII value of corresponding character is "<<(int)ch;
		}
};

int main()
{
	ASCII aobj;

	aobj.Display();

	return(0);
}
