/*	Calculating factorial of a no..	

	Input:	10
	Output:	3628800	*/




#include<iostream>

using namespace std;

int ReturnR(int ino)
{
	static int i=1,ifact=1;

	if(ino<0)
	{
		ino=-ino;
	}

	if((ino==1) || (ino==0))
	{
		return(1);
	}

	
	if(i<=ino)
	{
		ifact=ifact*i;
	
		i++;

		ReturnR(ino);
	}

	return(ifact);
}

long fact(int n)
{
	if(n==0)
	{
		return(1);
	}

	return(n*fact(n-1));
}

int main()
{
	int num=0,iret=0;

	cout<<"\nEnter the no.: "<<"\n";
	cin>>num;

	cout<<"\nFactorial of "<<num<<" is "<<fact(num)<<"\n";

	iret=ReturnR(num);

	cout<<"\nFactorial of "<<num<<" is "<<iret<<"\n";

	return(0);
}
