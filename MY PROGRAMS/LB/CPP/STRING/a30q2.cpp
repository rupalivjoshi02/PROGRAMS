/* Write a program which accept string from user and copy the contents of that string into another string. (Implement strncpy() function)

Note : If third parameter is greater than the size of source string then copy whole string into destination.

Input:	String:"Marvellous Multi OS"
	No.:10
Output:	Marvellous 

*/




#include<iostream>

using namespace std;

class StrCopyNoOfChar
{
	public:
		void Display(char *,char *,int);
};

void StrCopyNoOfChar::Display(char *str1,char *str2,int ino)
{
	if((str1==NULL) || (str2==NULL))
	{
		return;
	}

	if(ino<0)
	{
		ino=-ino;
	}

	while((*str1!='\0') && (ino!=0))
	{
		*str2=*str1;

		str1++;
		str2++;
		ino--;
	}

	*str2='\0';
}

int main()
{
	char arr[100]={'\0'};
	char brr[100]={'\0'};
	int ivalue=0;

	cout<<"Enter the 1st string:";
	cin.getline(arr,100);

	cout<<"enter the no.:";
	cin>>ivalue;

	StrCopyNoOfChar scnocobj;

	scnocobj.Display(arr,brr,ivalue);

	cout<<"Updated String is "<<brr;

	return(0);
}
