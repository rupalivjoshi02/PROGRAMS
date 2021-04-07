/* Accept 1 no. from and character from user and display that character

Input:	char:'M'
	No.:5
Output:	M M M M M

Input:	char:'$'
	No.:-4
Output:	$ $ $ $

Input:	char:'x'
	No.:2
Output:	x x

Input:	char:'x'
	No.:0
Output:	

*/




#include<iostream>

using namespace std;

class CharNo
{
	public:
		void Display(char,int);
};

void CharNo::Display(char ch,int ino)
{
	int i=0;

	if(ino<0)
	{
		ino=-ino;
	}

	for(i=0;i<ino;i++)
	{
		cout<< ch ;
	}
}

int main()
{
	char cvalue='\0';
	int ivalue=0;

	cout<<"Enter the character:";
	cin>>cvalue;

	cout<<"Enter the no.:";
	cin>>ivalue;
	
	CharNo cobj;

	cobj.Display(cvalue,ivalue);

	return(0);
}
