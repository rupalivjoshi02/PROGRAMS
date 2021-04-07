/* Write a program which accept string from user and accept one character. Return frequency of that character.

Input:	String:“Marvellous Multi OS”
	Char:'M'
Output:	2

Input:	String:“Marvellous Multi OS”
	Char:'W'
Output:	0

*/




#include<iostream>

using namespace std;

class StrCharCount
{
	public:
		int Return(char *,char);
};

int StrCharCount::Return(char *str,char ch)
{
	int icnt=0;

	if(str==NULL)
	{
		return(0);
	}
	
	while(*str!='\0')
	{
		if(*str==ch)
		{
			icnt++;
		}

		str++;
	}

	return(icnt);
}

int main()
{
	char arr[100]={'\0'};
	char cvalue='\0';
	int iret=0;

	cout<<"Enter the string:";
	cin.getline(arr,100);

	cout<<"Enter the character:";
	cin>>cvalue;

	StrCharCount sccobj;

	iret=sccobj.Return(arr,cvalue);

	cout<<"Character count is "<<iret;

	return(0);
}
