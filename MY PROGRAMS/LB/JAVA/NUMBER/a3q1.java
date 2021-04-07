/*	1.Write a program which accept one number from user and print that number of even numbers on screen.

	Input:	7
	Output:	2 4 6 8 10 12 14 	*/




import java.util.*;

class Assignment3
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

class a3q1
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		int ivalue=0;

		System.out.println("Enter the no.: ");
		ivalue=sobj.nextInt();

		Assignment3 aobj=new Assignment3();

		aobj.Display(ivalue);
	}
}
