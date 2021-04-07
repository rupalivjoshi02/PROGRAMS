/* Write a program which accept name from user and print that name. 

Input:	Piyush Khairnar
Output:	Piyush Khairnar

*/




#include<iostream>

using namespace std;

int main()
{
	char Name[100]={'\0'};

	cout<<"Please enter the full name:";
	cin>>Name;

	cout<<Name;

	return(0);
}
