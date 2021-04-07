/* Write a program which accept string from user and display only digits from that string.

Input:	“marve89llous121”
Output:	89121

Input:	“Demo”
Output:	

*/




#include<iostream>

using namespace std;

class StrDigit
{
	public:
		void Display(char*);
};

void StrDigit::Display(char *str)
{
	if(str==NULL)
	{
		return;
	}
	
	while(*str!='\0')
	{
		if((*str>='0') && (*str<='9'))
		{
			cout<<*str;
		}

		str++;
	}
}

int main()
{
	char arr[100]={'\0'};

	cout<<"Enter the string:";
	cin.getline(arr,100);

	StrDigit sdobj;

	sdobj.Display(arr);

	return(0);
}
