/* Write a program which accept string from user and count number of white spaces

Input:	“MarvellouS”
Output:	0

Input:	“MarvellouS Infosystems”
Output:	1

Input:	“MarvellouS Infosystems by Piyush Manohar Khairnnar”
Output:	5

*/




#include<iostream>

using namespace std;

class StrSpaceCount
{
	public:
		int Return(char*);
};

int StrSpaceCount::Return(char *str)
{
	int icnt=0;

	if(str==NULL)
	{
		return(0);
	}
	
	while(*str!='\0')
	{
		if(*str==' ')
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
	int iret=0;

	cout<<"Enter the string:";
	cin.getline(arr,100);

	StrSpaceCount sscobj;

	iret=sscobj.Return(arr);

	cout<<"Count of Spaces in the string is  "<<iret;

	return(0);
}
