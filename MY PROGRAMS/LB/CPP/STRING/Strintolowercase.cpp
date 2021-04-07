/* Accept string from user and and convert the whole string into lowercase.

Input:	'Hello'
Output:	hello

Input:	'DEMO123'
Output:	demo123

*/




#include<iostream>

using namespace std;

class StrIntoLowerCase
{
	public:
		void Display(char *str)
		{
			if(str==NULL)
			{
				return;
			}

			while(*str!=0)
			{
				if((*str>='A') && (*str<='Z'))
				{
					*str=*str+32;
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

	StrIntoLowerCase silcobj;

	silcobj.Display(arr);

	cout<<"Updated string is "<<arr;

	return(0);
}
