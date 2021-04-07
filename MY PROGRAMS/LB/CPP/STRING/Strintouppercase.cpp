/* Accept string from user and convert the whole string into lowercase.

Input:	'Hello'
Output:	HELLO

*/




#include<iostream>

using namespace std;

class StrIntoUpperCase
{
	public:
		void Display(char *str)
		{
			if(str==NULL)
			{
				return;
			}
			
			while(*str!='\0')
			{
				if((*str>='a') && (*str<='z'))
				{
					*str=*str-32;
				}

				str++;
			}
		}
};

int main()
{
	char arr[100]={'\0'};

	cout<<"Enter the string: ";
	cin.getline(arr,100);

	StrIntoUpperCase siucobj;

	siucobj.Display(arr);

	cout<<"Updated string is "<<arr;

	return(0);
}

