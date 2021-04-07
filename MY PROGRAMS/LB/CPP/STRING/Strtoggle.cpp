/* Accept string from user and toggle the that string. */




#include<iostream>

using namespace std;

class StrToggle
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
				else if((*str>='A') && (*str<='Z'))
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

	StrToggle stobj;

	stobj.Display(arr);

	cout<<"Updated string is "<<arr;

	return(0);
}
