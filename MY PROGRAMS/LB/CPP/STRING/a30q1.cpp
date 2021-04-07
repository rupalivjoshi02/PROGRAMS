/* Write a program which accept string from user and copy the contents of that string into another string. (Implement strcpy() function)

Input:	"Marvellous Multi OS"
Output:	Marvellous Multi OS

*/




#include<iostream>

using namespace std;

class StrCopy
{
	public:
		void Display(char *,char *);
};

void StrCopy::Display(char *str1,char *str2)
{
	if((str1==NULL) || (str2==NULL))
	{
		return;
	}

	while(*str1!='\0')
	{
		*str2=*str1;

		str1++;
		str2++;
	}
}

int main()
{
	char arr[100]={'\0'};
	char brr[100]={'\0'};
	
	cout<<"Enter the 1st string:";
	cin.getline(arr,100);

	StrCopy scobj;

	scobj.Display(arr,brr);

	cout<<"Copied String is "<<brr;

	return(0);
}
