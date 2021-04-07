/* USE OF CLASS */


#include<iostream>

using namespace std;

class Person
{
	char cname[100]={'\0'};
	int iage=0;

	public:
		void Data();
		void Display();
};

void Person::Data()
{
	cout<<"Enter name:\n";
	cin>>cname;

	cout<<"Enter age:\n";
	cin>>iage;
}

void Person::Display()
{
	cout<<"\nName:"<<cname;
	cout<<"\nAge:"<<iage;
}

int main()
{
	Person pobj;

	pobj.Data();
	pobj.Display();

	return(0);
}
