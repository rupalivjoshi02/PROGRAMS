/* Accept string from user and count the capital character from that string.

Input:	'abcd'
Output:	0

Input:	'Hello'
Output:	1

Input:	'DEMO'
Output:	4

*/




#include<iostream>

using namespace std;

class StrCapitalCharCount
{
	public:	
		int Return(char *str)
		{
			int icnt=0;

			if(str==NULL)
			{
				return(-1);
			}

			while(*str!='\0')
			{
				if((*str>='A') && (*str<='Z'))
				{	
					icnt++;
				}

				str++;
			}

			return(icnt);
		}
};

int main()
{
	char arr[100]={'\0'};
	int iret=0;

	cout<<"Enter the string: ";
	cin.getline(arr,100);

	StrCapitalCharCount scccobj;

	iret=scccobj.Return(arr);

	cout<<"No. of capital character in the given string is "<<iret;

	return(0);
}
