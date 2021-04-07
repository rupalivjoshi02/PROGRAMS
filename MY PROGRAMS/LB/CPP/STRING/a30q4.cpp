/* Write a program which accept string from user and copy small characters of that string into another string.

Input:	"Marvellous multi OS"
Output:	arvellous multi 

*/




#include<iostream>

using namespace std;

class StrCopySmallChar
{
	public:
		void Display(char *,char *);
};

void StrCopySmallChar::Display(char *str1,char *str2)
{
	if((str1==NULL) || (str2==NULL))
	{
		return;
	}

	while(*str1!='\0')
	{
		if(((*str1>=97) && (*str1<=122)) || (*str1==' '))
		{
			*str2=*str1;

			str2++;
		}

		str1++;
	}

	*str2='\0';
}

int main()
{
	char arr[100]={'\0'};
	char brr[100]={'\0'};

	cout<<"Enter the 1st string:";
	cin.getline(arr,100);

	StrCopySmallChar scscobj;

	scscobj.Display(arr,brr);

	cout<<"Updated String is "<<brr;

	return(0);
}
