/* Accept no. from user and display below pattern. 

Input:	6 
Output:	1 * 2 # 3 * 4 # 5 * 6 # 

Input:	3
Output:	1 * 2 # 3 * 

*/




#include<iostream>

using namespace std;

class OddStarEvenHash
{
	public:
		void Display(int ino)
		{
			int i=0;

			if(ino<0)
			{
				ino=-ino;
			}

			for(i=1;i<=ino;i++)
			{
				if((i%2)!=0)
				{
					cout<<i<<" * ";
				}
				else
				{
					cout<<i<<" # ";
				}
			}
		}
};

int main()
{
	int ivalue=0;

	cout<<"Enter the no.:";
	cin>>ivalue;

	OddStarEvenHash osehobj;

	osehobj.Display(ivalue);

	return(0);
}
