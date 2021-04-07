import java.util.*;

class Demo
{
	public boolean Boolean(int ino)
	{
		int i=0,idig=0,irev=0,temp=0;

		if(ino<0)
		{
			ino=-ino;
		}

		temp=ino;

		while(ino!=0)
		{
			idig=ino%10;
			irev=(irev*10)+idig;
			ino=ino/10;
		}

		if(temp==irev)
		{
			return(true);
		}
		else
		{
			return(false);
		}
	}
}

class CheckPalindromeNo
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		int ivalue=0;

		System.out.println("Enter the no.: ");

		ivalue=sobj.nextInt();

		Demo dobj=new Demo();

		boolean bret=false;
	
		bret=dobj.Boolean(ivalue);

		if(bret==true)
		{
			System.out.println("YES,the given no. is palindrome.");
		}
		else
		{
			System.out.println("NO,the given no. is not palindrome.");
		}
	}
}
