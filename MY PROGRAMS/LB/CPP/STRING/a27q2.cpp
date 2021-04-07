/* Write a program which accept string from user and count number of small characters.

Input:	“Marvellous”
Output:	9

*/




#include<iostream>

using namespace std;

class StrSmallCaseCount
{
	public:
		int Return(char*);
};

int StrSmallCaseCount::Return(char *str)
{
	char ccnt='\0';

	if(str==NULL)
	{
		return(0);
	}

	while(*str!='\0')
	{
		if((*str>=97) && (*str<=122))
		{
			ccnt++;
		}

		str++;
	}

	return(ccnt);
}

int main()
{
	char arr[100]={'\0'};
	int iret=0;

	cout<<"Enter the string:";
	cin.getline(arr,100);

	StrSmallCaseCount ssccobj;

	iret=ssccobj.Return(arr);

	cout<<"Small case count in the given string is "<<iret;

	return(0);
}
