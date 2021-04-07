#include<iostream>

using namespace std;

int main()
{
	int ino=11;
	int *p=&ino;
	int *(&ref)=p;

	cout<<"\n"<<ino<<"\n";
	cout<<"\n"<<*p<<"\n";
	cout<<"\n"<<p<<"\n";
	cout<<"\n"<<&p<<"\n";
	cout<<"\n"<<ref<<"\n";
	cout<<"\n"<<*ref<<"\n";

	return(0);
}
