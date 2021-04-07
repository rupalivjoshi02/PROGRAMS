// USE OF NEW AND DELETE OPERATOR




#include<iostream>

using namespace std;

int main()
{
	int *arr;
	int isize=0;

	cout<<"\nEnter the size of the integer array.";
	cin>>isize;

	cout<<"\nCreating an array of size"<<isize<<"..";
	arr=new int[isize];

	cout<<"\nDynamic allocation of memory of an integer array arr is successful.";

	delete arr;

	return(0);	
}
