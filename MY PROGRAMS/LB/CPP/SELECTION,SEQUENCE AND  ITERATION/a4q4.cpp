/* We have to design application for tourist company. Tourist company provides cars on rent. Depends on the running of car they apply rent. If running is less than 100 kilometres then they charge 25 rupees per kilometre . And if running is more than 100 kilometres then they apply 15 rupees per kilometre after 100 kilometres. We have to accept number of kilometres from user and return the estimated rent.

Input:	73
Output:	1850

Input:	73
Output:	1850

Input:	73
Output:	1850

*/




#include<iostream>

using namespace std;

class Car
{
	public:
		int irent=0;

	public:
		int Return(int );
};

int Car::Return(int ikm)
{
	if(ikm<100)		
	{
		irent=ikm*25;
	}
	else
	{
		irent=(ikm*15)+1000;
	}

	return(irent);
}

int main()
{
	int ivalue=0,iret=0;

	cout<<"Enter the kilometer.";
	cin>>ivalue;

	Car cobj;

	iret=cobj.Return(ivalue);

	cout<<"Total rent is Rs. "<<iret;

	return(0);
}


