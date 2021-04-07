#include<iostream>

using namespace std;

int main()
{
	int no=11;
	int &ref=no;
	int *p=&ref;

	cout<<"\n"<<no<<"\n";
	cout<<"\n"<<&no<<"\n";
	cout<<"\n"<<*p<<"\n";
	cout<<"\n"<<&ref<<"\n";
	cout<<"\n"<<p<<"\n";

	return(0);
}
