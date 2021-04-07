/*	5. Write a program which accept N and print first 5 multiples of N.

	Input:	4
	Output:	4 8 12 16 20	*/




import java.util.*;

class Assignment7
{
	public void Display(int ino)
	{
		int i=0,imult=1;

		if(ino<0)
		{
			ino=-ino;
		}

		if(ino==0)
		{
			return;
		}

		for(i=1;i<=5;i++)
		{
			imult=ino*i;

			System.out.print(imult+"\t");
		}
	}
}

class a7q5
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
