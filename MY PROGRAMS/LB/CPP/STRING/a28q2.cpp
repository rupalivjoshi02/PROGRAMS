/* Write a program which accept string from user and convert it into upper case.

Input:	“Marvellous Multi OS”
Output:	MARVELLOUS MULTI OS

*/




#include<iostream>

using namespace std;

class StrConvertUpperCase
{
	public:
		void Display(char*);
};

void StrConvertUpperCase::Display(char *str)
{
	if(str==NULL)
	{
		return;
	}
	
	while(*str!='\0')
	{
		if((*str>=97) && (*str<=122))
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

	StrConvertUpperCase scucobj;

	scucobj.Display(arr);

	return(0);
}
