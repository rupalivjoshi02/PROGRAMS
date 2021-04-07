import java.util.*;

class Demo
{
	public boolean Boolean(int ino)
	{
		int i=0;

		if(ino<0)
		{
			ino=-ino;
		}

		if((ino==1) || (ino==-1) || (ino==0))	
		{
			return(false);
		}

		for(i=(ino/2);i>1;i--)
		{
			if((ino%i)==0)
			{
				break;
			}
		}

		if(i==1)
		{
			return(true);
		}
		else
		{
			return(false);
		}
	}
}

class PrimeNo
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		int ivalue=0;
		boolean bret=false;

		System.out.println("Enter the no.: ");

		ivalue=sobj.nextInt();

		Demo dobj=new Demo();

		bret=dobj.Boolean(ivalue);

		if(bret==true)
		{
			System.out.println("YES,the given no. is prime no..");
		}
		else
		{
			System.out.println("NO,the given no. is not prime no..");
		}
	}
}
