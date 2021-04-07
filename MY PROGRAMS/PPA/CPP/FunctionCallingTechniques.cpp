#include<iostream>

using namespace std;

void Funv(int ino)
{
	cout<<"\n"<<ino<<"\n";

	ino++;

	cout<<"\n"<<ino<<"\n";
}

void FunA(int *p)
{
	cout<<"\n"<<*p<<"\n";

	(*p)++;

	cout<<"\n"<<*p<<"\n";
}

void FunR(int &ref)
{
	cout<<"\n"<<ref<<"\n";

	ref++;

	cout<<"\n"<<ref<<"\n";
}

int main()
{
	int i=10,j=10,k=10;

	cout<<"\n"<<i<<"\n";

	Funv(i);

	cout<<"\n"<<i<<"\n";

	cout<<"\n"<<j<<"\n";

	FunA(&j);

	cout<<"\n"<<j<<"\n";

	cout<<"\n"<<k<<"\n";

	FunR(k);

	cout<<"\n"<<k<<"\n";

	return(0);
}
