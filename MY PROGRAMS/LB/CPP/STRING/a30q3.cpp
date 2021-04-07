/* Write a program which accept string from user and copy capital characters of that string into another string.

Input:	"Marvellous Multi OS"
Output:	M M OS 

*/




#include<iostream>

using namespace std;

class StrCopyCapitalChar
{
	public:
		void Display(char *,char *);
};

void StrCopyCapitalChar::Display(char *str1,char *str2)
{
	if((str1==NULL) || (str2==NULL))
	{
		return;
	}

	while(*str1!='\0')
	{
		if(((*str1>=65) && (*str1<=90)) || (*str1==' '))
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

	StrCopyCapitalChar scccobj;

	scccobj.Display(arr,brr);

	cout<<"Updated String is "<<brr;

	return(0);
}
