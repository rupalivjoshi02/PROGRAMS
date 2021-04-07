/* Accept string from user and swap the content of that string. */




#include<iostream>

using namespace std;

class CharSwap
{	
	public:
		void Display(char *ch1,char *ch2)
		{
			char temp='\0';

			if((ch1==NULL) || (ch2==NULL))
			{
				return;
			}

			temp=*ch1;
			*ch1=*ch2;
			*ch2=temp;
		}
};

int main()
{
	char arr[100]={'\0'};
	char brr[100]={'\0'};

	cout<<"Enter the 1st character arr: ";
	cin>>arr;

	cout<<"Enter the 2nd character brr: ";
	cin>>brr;

	CharSwap csobj;

	csobj.Display(arr,brr);

	cout<<"After swapping the character \n"<<"arr:"<<arr<<"\n"<<"brr:"<<brr;

	return(0);
}
