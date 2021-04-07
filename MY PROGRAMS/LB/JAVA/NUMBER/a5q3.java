/*	3.Write a program which accept number from user and display all its non factors.

	Input:	12
	Output:	5 7 8 9 10 11

	Input:	13
	Output:	2 3 4 5 6 7 8 9 10 11 12 	

	Input:	10
	Output:	3 4 6 7 8 9	*/




import java.util.*;

class Assignment5
{
	public void Display(int ino)
	{
		int i=0;

		if(ino<0)
		{
			ino=-ino;
		}

		for(i=1;i<ino;i++)
		{
			if((ino%i)!=0)
			{
				System.out.print(i+"\t");
			}
		}
	}
}

class a5q3
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		int ivalue=0;

		System.out.println("Enter the no.: ");
		ivalue=sobj.nextInt();

		Assignment5 aobj=new Assignment5();

		aobj.Display(ivalue);
	}
}
