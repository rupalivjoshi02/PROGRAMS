/* Accept amount in US dollar and return its corresponding value in Indian currency.Consider 1$ as 70 rupees.

Input:	10
Output:	700

Input:	3
Output:	210

Input:	1200
Output:	84000

*/




#include<iostream>

using namespace std;

class Currency
{
	public:
		int Return(int idol)
		{
			int irs=0;

			irs=70*idol;

			return(irs);
		}		
};

int main()
{
	int ivalue=0,iret=0;

	cout<<"Enter the dollar:";
	cin>>ivalue;

	Currency cobj;

	iret=cobj.Return(ivalue);

	cout<<"The amount in US dollar and its corresponding currency in rupees is "<<iret;

	return(0);
}
