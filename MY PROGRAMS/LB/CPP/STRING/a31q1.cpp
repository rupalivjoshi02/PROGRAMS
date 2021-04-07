/* Write a program which accept string from user and copy that characters of that string into another string in reverse order.

Input:	"Marvellous Python"
Output:	nohtyP suollevraM

*/




#include<iostream>

using namespace std;

class StrReverse
{
	public:
		void Display(char *,char *);
};

void StrReverse::Display(char *str1,char *str2)
{
	int icnt=0;

	if((str1==NULL) || (str2==NULL))
	{
		return;
	}

	while(*str1!='\0')
	{
		str1++;
		icnt++;
	}

	str1--;

	while(icnt!=0)
	{
		*str2=*str1;

		str2++;
		str1--;
		icnt--;
	}

	*str2='\0';
}

int main()
{
	char arr[100]={'\0'};
	char brr[100]={'\0'};
	
	cout<<"Enter the 1st string:";
	cin.getline(arr,100);

	StrReverse srobj;

	srobj.Display(arr,brr);

	cout<<"Reversed String is "<<brr;

	return(0);
}
