/* Write a program which accept string from user and convert it into lower case.

Input:	“Marvellous Multi OS”
Output:	marvellous multi os

*/




#include<iostream>

using namespace std;

class StrConvertLowerCase
{
	public:
		void Display(char*);
};

void StrConvertLowerCase::Display(char *str)
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

		cout<<*str;

		str++;
	}
}

int main()
{
	char arr[100]={'\0'};

	cout<<"Enter the string:";
	cin.getline(arr,100);

	StrConvertLowerCase sclcobj;

	sclcobj.Display(arr);

	return(0);
}
