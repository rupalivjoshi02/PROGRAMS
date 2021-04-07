/* Accept one character from user and convert case of that character.

Input: a
Output:	A

Input: D
Output:	d

*/




#include<iostream>

using namespace std;

class Char
{
	public:
		int Return(char ch)
		{
			if((ch>=65) && (ch<=91))
			{
				ch=ch+32;
			}
			else if((ch>=97) && (ch<=123))
			{
				ch=ch-32;
			}

			return(ch);
		}
};

int main()
{
	char cvalue='\0';
	int iret=0;

	cout<<"Enter the character:";
	cin>>cvalue;

	Char cobj;

	iret=cobj.Return(cvalue);
	
	cout<<iret;

	return(0);
}
