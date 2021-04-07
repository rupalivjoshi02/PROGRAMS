/* Write a program which accept string from user and count number of capital characters.

Input:	“Marvellous Multi OS”
Output:	4

*/




#include<iostream>

using namespace std;

class StrCapitalCount
{
	public:
		int Return(char*);
};

int StrCapitalCount::Return(char *str)
{
	char ccnt='\0';

	if(str==NULL)
	{
		return(0);
	}

	while(*str!='\0')
	{
		if((*str>=65) && (*str<=90))
		{
			ccnt++;
		}

		str++;
	}

	return(ccnt);
}

int main()
{
	char arr[100]={'\0'};
	int iret=0;

	cout<<"Enter the string:";
	cin.getline(arr,100);

	StrCapitalCount sccobj;

	iret=sccobj.Return(arr);

	cout<<"Capital count in the given string is "<<iret;

	return(0);
}
