/*	5. Accept one number from user and print that number of * on screen.	*/




import java.util.*;

class Assignment1
{
	public void Display(int ino)
	{
		int i=0;

		if(ino<0)
		{
			ino=-ino;
		}

		for(i=1;i<=ino;i++)
		{
			System.out.print("*\t");
		}
	}
}

class a1q5
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		int ivalue=0;
		 
		System.out.println("Enter the no.: ");
		ivalue=sobj.nextInt();

		Assignment1 aobj=new Assignment1();

		aobj.Display(ivalue);
	}
}





