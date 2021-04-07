/* Accept character from user. If character is small display its corresponding capital character, and if it small then display its corresponding capital. In other cases display as it is.

Input:	Q
Output:	q

Input:	m
Output:	M

Input:	4
Output:	4

Input:	%
Output:	%

*/




#include<iostream>

using namespace std;

class CorrespondingChar
{
	public:
		void Display(char);
};

void CorrespondingChar::Display(char ch)
{
	char c='\0';

	if((ch>=65) && (ch<=90))
	{
		c=ch+32;

		cout<<c;
	}
	else if((ch>=97) && (ch<=122))
	{
		c=ch-32;

		cout<<c;
	}
	else
	{
		cout<<ch;
	}
}

int main()
{
	char cvalue='\0';

	cout<<"Enter the character:";
	cin>>cvalue;

	CorrespondingChar ccobj;

	ccobj.Display(cvalue);

	return(0);
}
