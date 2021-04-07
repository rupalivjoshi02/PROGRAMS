import java.util.*;

class Demo
{
	public void Display(int ino)
	{
		int i=0,idig=0,irev=0;

		if(ino<0)
		{
			ino=-ino;
		}

		while(ino!=0)
		{
			idig=ino%10;
			irev=(irev*10)+idig;
			ino=ino/10;
		}

		System.out.print("Reversed no. is "+irev);
	}
}

class ReverseNo
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		int ivalue=0;

		System.out.println("Enter the no.: ");

		ivalue=sobj.nextInt();

		Demo dobj=new Demo();

		dobj.Display(ivalue);
	}
}
