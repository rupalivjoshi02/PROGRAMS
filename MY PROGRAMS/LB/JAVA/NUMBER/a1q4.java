/*	4. Accept one number and check whether is is divisible by 5 or not.	*/




import java.util.*;

class Assignment1
{
	public boolean Boolean(int ino)
	{
		if((ino%5)==0)	
		{
			return(true);
		}
		else
		{
			return(false);
		}
	}
}

class a1q4
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		int ivalue=0;
		boolean bret=false;

		System.out.println("Enter the no.: ");
		ivalue=sobj.nextInt();

		Assignment1 aobj=new Assignment1();

		bret=aobj.Boolean(ivalue);

		if(bret==true)
		{
			System.out.println("YES , the given no. is divisible by 5.");
		}
		else
		{
			System.out.println("NO , the given no. is not divisible by 5.");
		}
	}
}





