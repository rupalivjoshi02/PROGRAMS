import java.util.*;

class Demo
{
	public boolean Boolean(int ino)
	{
		int i=0,isum=0;

		if(ino<0)
		{
			ino=-ino;
		}

		for(i=1;i<=(ino/2);i++)
		{
			if((ino%i)==0)
			{
				isum=isum+i;
			}
		}

		if(isum==ino)
		{
			return(true);
		}
		else
		{
			return(false);
		}
	}
}

class PerfectNo
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
			System.out.println("YES,the given no. is perfect no..");
		}
		else
		{
			System.out.println("NO,the given no. is not perfect no..");
		}
	}
}
