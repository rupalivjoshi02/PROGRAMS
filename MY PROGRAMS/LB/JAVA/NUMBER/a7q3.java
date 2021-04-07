/*	3. Write a program which accept number from user and print its numbers line.

	Input:	4
	Output:	-4 -3 -2 -1 0 1 2 3 4	*/




import java.util.*;

class Assignment7
{
	public void Display(int ino)
	{
		int i=0;

		if(ino<0)
		{
			ino=-ino;
		}

		if((ino==0) && (ino==1))
		{
			return;
		}

		System.out.println("No. line is ");

		for(i=(-ino);i<=ino;i++)
		{
			System.out.print(i+"\t");
		}
	}
}

class a7q3
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		int ivalue=0;

		System.out.println("Enter the no.: ");
		ivalue=sobj.nextInt();

		Assignment7 aobj=new Assignment7();

		aobj.Display(ivalue);
	}
}
