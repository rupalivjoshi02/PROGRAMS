#include<iostream>

using namespace std;

int main()
{
	int arr[3]={10,20,30};
	int (&brr)[3]=arr;

	cout<<"\n"<<arr<<"\n";
	cout<<"\n"<<arr[0]<<"\n";
	cout<<"\n"<<arr+1<<"\n";
	cout<<"\n"<<brr<<"\n";
	cout<<"\n"<<brr[0]<<"\n";
	cout<<"\n"<<brr+1<<"\n";
	cout<<"\n"<<(&arr)+1<<"\n";
	cout<<"\n"<<(&brr)+1<<"\n";

	return(0);
}
