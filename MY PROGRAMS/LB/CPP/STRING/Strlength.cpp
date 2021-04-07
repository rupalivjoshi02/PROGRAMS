/* Accept sting from user and calculate the length of that string.

Input:	"ABCD"
Output:	4 

Input:	"ABC xyz"
Output:	7

*/




#include<iostream>

using namespace std;

class StrLength
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
				icnt++;
				str++;
			}

			return(icnt);
		}
};

int main()
{
	char arr[100]={'\0'};
	int iret=0;

	cout<<"Enter the string"<<"\n";
	cin.getline(arr,100);		//For white spaces in string

	StrLength slobj;

	iret=slobj.Return(arr);

	cout<<"Length of the string is "<<iret;

	return(0);
}
