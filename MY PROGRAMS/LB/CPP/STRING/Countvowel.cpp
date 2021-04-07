/* Accept sting from user and count the freq of vowels in that string.

Input:	"abcd"
Output:	1

Input:	"aiwe"
Output:	3

*/




#include<iostream>

using namespace std;

class CountVowel
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
				if((*str=='a') || (*str=='e') || (*str=='i') || (*str=='o') || (*str=='u') || (*str=='A') || (*str=='E') || (*str=='I') || (*str=='O') || (*str=='U'))
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

	CountVowel cvobj;

	iret=cvobj.Return(arr);

	if(iret==0)
	{
		cout<<"There is no such a vowel in the given string.";
	}
	else
	{
		cout<<"Freq. of vowels in the given string is "<<iret;
	}

	return(0);
}
