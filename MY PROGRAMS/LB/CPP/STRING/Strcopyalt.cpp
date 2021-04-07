/* Accept string from user and copy the content into the destination string in alternate format.

Input:	abcde
Output:	ace

Input:	abcd
Output:	ac

Input:	ab
Output:	a

Input:	a
Output:	a

*/




#include<iostream>

using namespace std;

class StrCopyAlt
{
	public:
		void Display(char *str1,char *str2)
		{
			if((str1==NULL) || (str2==NULL))
			{
				return;
			}

			while(*str1!='\0')
			{
				*str2=*str1;

				if(*(str1+1)=='\0')
				{
					*str2++;

					break;
				}

				str1=str1+2;
	
				str2++;
			}
		}
};

int main()
{
	char arr[100]={'\0'};
	char brr[100]={'\0'};

	cout<<"Enter the string:";
	cin.getline(arr,100);

	StrCopyAlt scaobj;

	scaobj.Display(arr,brr);

	cout<<"Copied string is "<<brr;

	return(0);
}
