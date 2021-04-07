/*	COPY CONSTRUCTOR	*/




#include<iostream>

using namespace std;

class Demo
{
	public:
		int i=0,j=0;

		Demo()
		{
			i=0;
			j=0;
		}

		Demo(int x)
		{
			i=x;
			j=x;
		}

		Demo(int x,int y)
		{
			i=x;
			j=x;
		}

		Demo(Demo &ref)
		{
			i=ref.i;
			j=ref.j;
		}
};

int main()
{
	Demo dobj1;
	
	cout<<"\n"<<dobj1.i<<"\n";
	cout<<"\n"<<dobj1.j<<"\n";

	Demo dobj2;

	cout<<"\n"<<dobj2.i<<"\n";
	cout<<"\n"<<dobj2.j<<"\n";

	Demo dobj3(11);

	cout<<"\n"<<dobj3.i<<"\n";
	cout<<"\n"<<dobj3.j<<"\n";

	Demo dobj4(11,21);

	cout<<"\n"<<dobj4.i<<"\n";
	cout<<"\n"<<dobj4.j<<"\n";

	Demo dobj5(dobj4);

	cout<<"\n"<<dobj5.i<<"\n";
	cout<<"\n"<<dobj5.j<<"\n";

	return(0);
}
