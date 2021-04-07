/* Write a program which 2 strings from user and concat second string after first string. (Implement strcat() function).

Input:	1st String:“Marvellous Infosystems”
	2nd String:“Logic Building”
Output:	Marvellous Infosystems Logic Building

*/




#include<iostream>

using namespace std;

class StrConcate
{
	public:
		void Display(char *,char *);
};

void StrConcate::Display(char *str1,char *str2)
{
	if((str1==NULL) || (str2==NULL))
	{
		return;
	}

	while(*str1!='\0')
	{
		str1++;
	}

	while(*str2!='\0')
	{
		*str1=*str2;

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

	cout<<"Enter the 2nd string:";
	cin.getline(brr,100);

	StrConcate scobj;

	scobj.Display(arr,brr);

	cout<<"Concatenated String is "<<arr;

	return(0);
}
