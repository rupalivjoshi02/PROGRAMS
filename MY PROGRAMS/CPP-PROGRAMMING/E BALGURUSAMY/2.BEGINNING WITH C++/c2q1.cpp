/* Write a program to display the following output using a 1le cout statement.
	Maths=90
	Physics=77
	Chemistry=69
*/




#include<iostream>

using namespace std;

class Student
{
	public:
		void Display();
};

void Student::Display()
{
	cout<<"\nMaths=90\n"<<"\nPhysics=77\n"<<"\nChemistry=69\n";
}

int main()
{
	Student sobj;

	sobj.Display();

	return(0);
}
