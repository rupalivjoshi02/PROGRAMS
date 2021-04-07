/* Accept sting from user and calculate the freq of character 'a' or 'A' in that string.

Input:	"abcd"
Output:	1

Input:	"aaaa"
Output:	4

Input:	"Hello"
Output:	0

Input:	"abc aa pq"
Output:	3

*/




#include<iostream>

using namespace std;

class FreqOfAora
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
				if((*str=='a') || (*str=='A'))
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

	FreqOfAora fobj;

	iret=fobj.Return(arr);
	
	if(iret!=0)
	{
		cout<<"Freq. of character 'a' or 'A' in the given string is "<<iret;
	}
	else
	{
		cout<<"There is no such character like 'a' or 'A' in the given string.";
	}

	return(0);
}
