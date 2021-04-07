/* Accept string from user and copy the content of that string into another string.

Input:	Hello
Output:	HEllo

*/




#include<iostream>

using namespace std;

class StrCopy
{
	public:
		void Display(char *src,char *dest)
		{
			if((src==NULL) || (dest==NULL))
			{
				return;
			}

			while(*src!='\0')
			{
				*dest=*src;

				src++;
				dest++;
			}

			*dest='\0';
		}
};

int main()
{
	char arr[100]={'\0'};
	char brr[100]={'\0'};

	cout<<"Enter the string:";
	cin.getline(arr,100);
	
	StrCopy scobj;

	scobj.Display(arr,brr);

	cout<<"Copied string is "<<brr;

	return(0);
}
