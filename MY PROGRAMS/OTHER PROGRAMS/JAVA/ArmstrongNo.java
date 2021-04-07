import java.util.*;

class Demo
{
	public boolean Boolean(int ino)
	{
		int i=0,idig=0,temp=0,isum=0,ipow=0,icnt=0;

		if(ino<0)
		{
			ino=-ino;
		}

		temp=ino;

		while(ino!=0)
		{	
			icnt++;

			ino=ino/10;
		}

		ino=temp;

		while(ino!=0)
		{
			idig=ino%10;

			for(i=0,ipow=1;i<icnt;i++)
			{
				ipow=ipow*idig;
			}

			isum=isum+ipow;

			if(isum>temp)
			{
				break;
			}

			ino=ino/10;
		}

		if(isum==temp)
		{
			return(true);
		}
		else
		{
			return(false);
		}
	}
}

class ArmstrongNo
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
			System.out.println("YES,the given no. is armstrong no..");
		}
		else
		{
			System.out.println("NO,the given no. is not armstrong no..");
		}
	}
}
