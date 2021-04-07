/*	1. Accept number from user and display below pattern..

	Input:	5
	Output:	A B C D E	*/




import java.util.*;

class Assignment14
{
	public void Display(int ino)
	{
		char ch='\0';
		int i=0;

		if(ino<0)
		{
			ino=-ino;
		}

		ch='A';

		for(i=1;i<=ino;i++,ch++)
		{
			System.out.print(ch+"\t");
		}
	}
}

class a14q1
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		int ivalue=0;

		System.out.println("Enter the no.: ");
		ivalue=sobj.nextInt();

		Assignment14 aobj=new Assignment14();

		aobj.Display(ivalue);
	}
}
