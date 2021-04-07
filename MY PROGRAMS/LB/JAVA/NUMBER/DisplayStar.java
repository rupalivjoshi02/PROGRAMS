/*	Accept 2 no. from user and display that no. of $ on screen.	
	
	Input:	6 
	Output:	$ $ $ $ $ $

	Input:	0  
	Output:	

	Input:	-4
	Output:	$ $ $ $	*/




import java.util.*;

class Number
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
			System.out.print("$ ");
		}
	}
}

class DisplayStar
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		int ivalue=0;

		System.out.println("Enter the no.: ");
		ivalue=sobj.nextInt();

		Number nobj=new Number();

		nobj.Display(ivalue);
	}
}
