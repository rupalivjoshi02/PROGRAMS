/* Write a program which accept string from user and toggle the case.

Input:	“Marvellous Multi OS”
Output:	mRVELLOUS mULTI os

*/




#include<iostream>

using namespace std;

class StrToggle
{
	public:
		void Display(char*);
};

void StrToggle::Display(char *str)
{
	if(str==NULL)
	{
		return;
	}
	
	while(*str!='\0')
	{
		if((*str>=65) && (*str<=90))
		{
			*str=*str+32;
		}
		else if((*str>=97) && (*str<=122))
		{
			*str=*str-32;
		}

		cout<<*str;

		str++;
	}
}

int main()
{
	char arr[100]={'\0'};

	cout<<"Enter the string:";
	cin.getline(arr,100);

	StrToggle stobj;

	stobj.Display(arr);

	return(0);
}
