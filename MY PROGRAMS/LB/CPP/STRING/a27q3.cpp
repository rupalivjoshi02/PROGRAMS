/* Write a program which accept string from user and return difference between frequency of small characters and frequency of capital characters.

Input:	“MarvellouS”
Output:	6 (8-2)

*/




#include<iostream>

using namespace std;

class StrDifference
{
	public:
		int Return(char*);
};

int StrDifference::Return(char *str)
{
	char ccnt1='\0',ccnt2='\0';

	if(str==NULL)
	{
		return(0);
	}

	while(*str!='\0')
	{
		if((*str>=97) && (*str<=122))
		{
			ccnt1++;
		}
		else if((*str>=65) && (*str<=90))
		{
			ccnt2++;
		}

		str++;
	}

	return(ccnt1-ccnt2);
}

int main()
{
	char arr[100]={'\0'};
	int iret=0;

	cout<<"Enter the string:";
	cin.getline(arr,100);

	StrDifference sdobj;

	iret=sdobj.Return(arr);

	cout<<"Difference between capital and small case character is  "<<iret;

	return(0);
}
