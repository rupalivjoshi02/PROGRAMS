/*	Write a program which is used to perform addition and substraction of 2 no..	

	OBJECT ORIENTED APPROACH	*/




#include<iostream>

using namespace std;

class Arithmatic 
{
	public:
		int ino1=0,ino2=0,ians=0;	//characteristics

		Arithmatic()	//default constructor
		{
			cout<<"\nInside default constructor.\n";

			ino1=0;	
			ino2=0;	
			ians=0;
		}

		Arithmatic(int x,int y)	//parameterised constructor
		{
			cout<<"\nInside parameterised constructor.\n";

			ino1=x;
			ino2=y;
			ians=0;
		}

		Arithmatic(Arithmatic &ref)	//copy constructor
		{
			ino1=ref.ino1;
			ino2=ref.ino2;
			ians=ref.ians;	

			cout<<"\nInside copy constructor.\n";
		}

		void Addition()	//behaviour
		{
			ians=ino1+ino2;
		}

		void Substraction()	//behaviour
		{
			ians=ino1-ino2;
		}

		~Arithmatic()	//destructor
		{
			cout<<"\nInside destructor.\n";
		}
};

int main()
{
	Arithmatic aobj1;
	Arithmatic aobj2(10,3);

	aobj1.Addition();

	cout<<"\n"<<aobj1.ians<<"\n";

	aobj1.Substraction();

	cout<<"\n"<<aobj1.ians<<"\n";

	aobj2.Addition();

	cout<<"\n"<<aobj2.ians<<"\n";

	aobj2.Substraction();

	cout<<"\n"<<aobj2.ians<<"\n";

	Arithmatic aobj3(aobj2);

	cout<<"\n"<<aobj3.ians<<"\n";

	aobj3.Addition();
	
	cout<<"\n"<<aobj3.ians<<"\n";

	aobj3.Substraction();
	
	cout<<"\n"<<aobj3.ians<<"\n";

	cout<<"\nDeallocating memory of all objects.\n";

	return(0);
}
