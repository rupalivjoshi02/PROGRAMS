/* Accept division of student from user and depends on the division display exam timing. There are 4 divisions in school as A,B,C,D. Exam of  division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM. (Application should be case insensitive)

Input:	c
Output:	Your exam at 9.20 AM

Input:	d
Output:	Your exam at 10.30 AM

*/




#include<iostream>

using namespace std;

class ExamTime
{
	public:
		void Display(char);
};

void ExamTime::Display(char cdiv)
{
	if((cdiv==65) || (cdiv==97))
	{
		cout<<"Your exam at 07:00 AM";
	}
	else if((cdiv==66) || (cdiv==98))
	{
		cout<<"Your exam at 08:30 AM";
	}
	else if((cdiv==67) || (cdiv==99))
	{
		cout<<"Your exam at 09:20 AM";
	}
	else if((cdiv==68) || (cdiv==100))
	{
		cout<<"Your exam at 10:30 AM";
	}
}

int main()
{
	char cvalue='\0';

	cout<<"Enter the student's division:";
	cin>>cvalue;

	ExamTime etobj;

	etobj.Display(cvalue);

	return(0);
}
