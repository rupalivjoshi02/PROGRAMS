/*	2. Write a program which accept number from user and print even factors of that number.

	Input:	24
	Output:	2 4 6 8 12 	*/




import java.util.*;

class Assignment3
{
	public void Display(int ino)
	{
		int i=0;

		for(i=1;i<=(ino/2);i++)
		{
			if(((ino%i)==0) && ((i%2)==0))
			{
				System.out.print(i+"\t");
			}
		}
	}
}

class a3q2
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
