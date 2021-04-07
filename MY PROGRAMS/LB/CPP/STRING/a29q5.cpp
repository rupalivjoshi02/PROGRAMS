/* Write a program which accept string from user reverse that string in place.

Input:	"abcd"
Output:	dcba

Input:	"abba"
Output:	abba

*/




#include<iostream>

using namespace std;

class StrReverse
{
	public:
		void Display(char *);
};

void StrReverse::Display(char *str)
{
	char temp='\0';
	char *src=NULL,*dest=NULL;

	if(str==NULL)
	{
		return;
	}

	src=str;
	dest=str;

	while(*dest!='\0')
	{
		dest++;
	}

	dest--;

	while(src<dest)
	{
		temp=*dest;
		*dest=*src;
		*src=temp;

		src++;
		dest--;
	}
}

int main()
{
	char arr[100]={'\0'};

	cout<<"Enter the string:";
	cin.getline(arr,100);

	StrReverse srobj;

	srobj.Display(arr);

	cout<<"Reversed String is "<<arr;

	return(0);
}
