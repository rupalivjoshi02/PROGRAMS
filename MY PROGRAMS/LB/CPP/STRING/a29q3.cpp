/* Write a program which accept string from user and accept one character. Return index of first occurrence of that character.

Input:	String:“Marvellous Multi OS”
	Char:'M'
Output:	0

Input:	String:“Marvellous Multi OS”
	Char:'W'
Output:	-1

Input:	String:“Marvellous Multi OS”
	Char:'e'
Output:	4

*/




#include<iostream>

using namespace std;

class StrChar1stOccurence
{
	public:
		int Return(char *,char);
};

int StrChar1stOccurence::Return(char *str,char ch)
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
			break;
		}

		str++;
		icnt++;
	}

	if(*str=='\0')
	{
		return(-1);
	}
	else
	{
		return(icnt);
	}
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

	StrChar1stOccurence scoobj;

	iret=scoobj.Return(arr,cvalue);

	cout<<"1st occurence of the character is "<<iret;

	return(0);
}
