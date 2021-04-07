/* Accept character from user. If it is capital then display all the characters from the input characters till Z. If input character is small then print all the characters in reverse order till a. In other cases return directly.

Input:	Q
Output:	Q R S T U V W X Y Z

Input:	m
Output:	m l k j i h g f e d c b  a

Input:	8
Output:	

*/




#include<iostream>

using namespace std;

class Character
{
	public:
		void Display(char);
};

void Character::Display(char ch)
{
	char c='\0';

	if((ch>='A') && (ch<='Z'))
	{
		for(c=ch;c<='Z';c++)
		{
			cout<<c<<"\t";
		}
	}
	else if((ch>='a') && (ch<='z'))
	{
		for(c=ch;c>='a';c--)
		{
			cout<<c<<"\t";
		}
	}
}

int main()
{
	char cvalue='\0';

	cout<<"Enter the character:";
	cin>>cvalue;

	Character cobj;

	cobj.Display(cvalue);

	return(0);
}
