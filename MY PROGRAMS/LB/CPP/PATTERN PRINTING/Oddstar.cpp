/* Accept no. from user and display below pattern. 

Input:	8
Output:	1 * 3 * 5 * 7 *

Input:	5
Output:	1 * 3 * 5 * 

*/




#include<iostream>

using namespace std;

class OddNoStar
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
			}
		}
};

int main()
{
	int ivalue=0;

	cout<<"Enter the no.:";
	cin>>ivalue;

	OddNoStar onsobj;

	onsobj.Display(ivalue);

	return(0);
}
