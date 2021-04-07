/* Accept string from user and copy the content of the 2nd string at the end of 1st string.

Input:	1st String: Hello
	2nd String: World
Output:	Hello World

*/




#include<iostream>

using namespace std;

class StrCopy2ndInto1st
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
				str1++;	
			}

			while(*str2!='\0')
			{
				*str1=*str2;

				str1++;
				str2++;
			}

			*str1='\0';
		}
};

int main()
{
	char arr[100]={'\0'};
	char brr[100]={'\0'};

	cout<<"Enter the 1st string:";
	cin.getline(arr,100);

	cout<<"Enter the 2nd string:";
	cin.getline(brr,100);

	StrCopy2ndInto1st sciobj;

	sciobj.Display(arr,brr);

	cout<<"Updated string is "<<arr;
	
	return(0);
}
