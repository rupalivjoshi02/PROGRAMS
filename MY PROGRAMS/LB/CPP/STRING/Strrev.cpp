/* Accept string from user and reverse the contents of that string inplace.
   Inplace indicates we have to reverse the content without allocating any seprate memory. 

Input:	Hello
Output:	olleH

Input:	abcd
Output:	dcba

*/




#include<iostream>

using namespace std;

class StrReverse
{
	public:
		void Display(char *str)
		{
			char *src=NULL,*dest=NULL;
			char temp='\0';

			if(str==NULL)
			{
				return;
			}

			src=str;
			dest=str;

			while(*dest!='\0')
			{
				dest++;
			}

			dest--;

			while(src<dest)
			{
				temp=*dest;
				*dest=*src;
				*src=temp;

				src++;
				dest--;
			}
		}
};

int main()
{
	char arr[100]={'\0'};

	cout<<"Enter the string:";
	cin.getline(arr,100);

	StrReverse srobj;

	srobj.Display(arr);

	cout<<"Reversed string is "<<arr;

	return(0);
}
