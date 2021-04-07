/*	1. Accept number from user and display below pattern..

	Input:	8
	Output:	2 4 6 8 10 12 14 16	*/




import java.util.*;

class Assignment14
{
	public void Display(int ino)
	{
		int i=0,imult=1;

		if(ino<0)
		{
			ino=-ino;
		}

		for(i=1;i<=ino;i++)
		{
			imult=i*2;

			System.out.print(imult+"\t");
		}
	}
}

class a14q5
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
