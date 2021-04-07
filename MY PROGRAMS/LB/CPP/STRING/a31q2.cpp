/* Write a program which accept string from user and copy that characters of that string into another string by removing all white  spaces 

Input:	"Marvel lous Pyth on"
Output:	MarvellousPython

*/




#include<iostream>

using namespace std;

class StrRemoveSpaces
{
	public:
		void Display(char *,char *);
};

void StrRemoveSpaces::Display(char *str1,char *str2)
{
	if((str1==NULL) || (str2==NULL))
	{
		return;
	}

	while(*str1!='\0')
	{
		if(*str1==' ')
		{
			str1=str1+1;
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

	StrRemoveSpaces srsobj;

	srsobj.Display(arr,brr);

	cout<<"Updated String is "<<brr;

	return(0);
}
