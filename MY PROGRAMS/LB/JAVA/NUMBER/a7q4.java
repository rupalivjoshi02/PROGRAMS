/*	4. Write a program which accepts N from user and print all odd numbers up to N.

	Input:	18
	Output:	1 3 5 7 9 11 13 15 17	*/




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

		System.out.println("All odd no. are ");

		for(i=1;i<18;i++)
		{
			if((i%2)!=0)
			{
				System.out.print(i+"\t");
			}
		}
	}
}

class a7q4
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
