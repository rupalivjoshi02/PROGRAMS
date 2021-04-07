/*	5. Accept number from user and check whether number is even or odd.		*/




import java.util.*;

class Assignment2
{
	public boolean Boolean(int ino)
	{
		if((ino%2)==0)
		{
			return(true);
		}
		else
		{
			return(false);
		}
	}
}

class a2q5
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		int ivalue=0;
		boolean bret=false;

		System.out.println("Enter the no.: ");
		ivalue=sobj.nextInt();

		Assignment2 aobj=new Assignment2();

		bret=aobj.Boolean(ivalue);

		if(bret==true)
		{
			System.out.println("The given no. is even.");
		}
		else	
		{
			System.out.println("The given no. is odd.");
		}
	}
}
