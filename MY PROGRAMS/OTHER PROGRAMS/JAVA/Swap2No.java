import java.util.*;

class Demo
{
	public void Display(int ino1,int ino2)
	{
		System.out.println("Before swapping the no. are ino1:"+ino1+"\tino2:"+ino2);
		
		ino1=ino1+ino2;
		ino2=ino1-ino2;
		ino1=ino1-ino2;

		System.out.println("After swapping the no. are ino1:"+ino1+"\tino2:"+ino2);
	}
}

class Swap2No
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		int ivalue1=0,ivalue2=0;

		System.out.println("Enter the 2 no.: ");

		ivalue1=sobj.nextInt();
		ivalue2=sobj.nextInt();

		Demo dobj=new Demo();

		dobj.Display(ivalue1,ivalue2);
	}
}
