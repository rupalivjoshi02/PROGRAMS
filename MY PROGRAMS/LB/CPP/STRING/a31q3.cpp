/* Write a program which accept string from user and copy that characters of that string into another string by converting all small characters into capital case. 

Input:	"Marvellous Python 2"
Output:	MARVELLOUS PYTHON 2

*/




#include<iostream>

using namespace std;

class StrCapital
{
	public:
		void Display(char *,char *);
};

void StrCapital::Display(char *str1,char *str2)
{
	if((str1==NULL) || (str2==NULL))
	{
		return;
	}

	while(*str1!='\0')
	{
		if((*str1>=97) && (*str1<=122))
		{
			*str1=*str1-32;
		}

		*str2=*str1;

		str1++;
		str2++;
	}

	*str2='\0';
}

int main()
{
	char arr[100]={'\0'};
	char brr[100]={'\0'};
	
	cout<<"Enter the 1st string:";
	cin.getline(arr,100);

	StrCapital scsobj;

	scsobj.Display(arr,brr);

	cout<<"Updated String is "<<brr;

	return(0);
}
