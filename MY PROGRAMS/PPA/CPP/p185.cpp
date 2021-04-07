/*	Consider below program which demonstrate the use of this pointer.	*/




#include<iostream>

using namespace std;

class Demo
{
	public:	
		int i,j;

		Demo()
		{
			i=0;
	
			this->j=0;
		}

		Demo(int i,int j)
		{
			i=i;
			j=j;

			this->i=i;
			this->j=j;

			this->Fun(11);
		}

		Demo(Demo &ref)
		{
			this->i=ref.i;
			this->j=ref.j;
		}

		void Fun(int ino)
		{
			cout<<"\n"<<i<<"\n";
			cout<<"\n"<<this->i<<"\n";
			cout<<"\n"<<this<<"\n";
		}

		void Gun()
		{
			this->Fun(51);
		}
};

int main()
{
	Demo dobj1;
	Demo dobj2(11,21);
	Demo dobj3(dobj2);

	dobj1.Fun(101);
	dobj2.Fun(201);
	dobj1.Gun();

	return(0);
		
}
