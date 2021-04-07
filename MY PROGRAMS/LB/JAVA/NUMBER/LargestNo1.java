/*	Accept 2 no. from user and return the largest no..	
	
	Input:	15 21 
	Output:	21

	Input:	0 15 
	Output:	15

	Input:	-15 -21 
	Output:	15

	Input:	-15 51 
	Output:	51

	Input:	21 21 
	Output:	21	*/




import java.util.*;

class Number
{
	public void Display(int ino1,int ino2)
	{
		if(ino1>ino2)
		{
			System.out.println("Largest no. is "+ino1);
		}
		else
		{
			System.out.println("Largest no. is "+ino2);
		}
	}
}

class LargestNo1
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		int ivalue1=0,ivalue2=0;

		System.out.println("Enter the 2 no.: ");
		ivalue1=sobj.nextInt();
		ivalue2=sobj.nextInt();

		Number nobj=new Number();

		nobj.Display(ivalue1,ivalue2);
	}
}
