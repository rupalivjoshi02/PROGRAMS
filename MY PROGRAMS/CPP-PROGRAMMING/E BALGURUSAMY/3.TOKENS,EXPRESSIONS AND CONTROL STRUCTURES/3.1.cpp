/* Scope resolution operator. */




#include<iostream>

using namespace std;

int m=10;

int main()
{
	int m=20;
	
	{
		int k=m;
		
		int m=30;

		cout<<"\nwe are in inner block.";

		cout<<"\nk= "<<k;
		cout<<"\nm= "<<m;
		cout<<"\n::m= "<<::m;
	}

	cout<<"\nwe are in outer block.";

	cout<<"\nm= "<<m;
	cout<<"\n::m= "<<::m;

	return(0);
}
