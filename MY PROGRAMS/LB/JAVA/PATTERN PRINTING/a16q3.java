/*	1. Accept number from user and display below pattern..

	Input:	irow:3 icol:5

	Output:	A A A A A
		B B B B B
		C C C C C	*/




import java.util.*;

class Assignment16
{
	public void Display(int irow,int icol)
	{
		int i=0,j=0;
		char ch='\0';

		if(irow<0)
		{
			irow=-irow;
		}

		if(icol<0)
		{
			icol=-icol;
		}

		for(i=1,ch='A';i<=irow;i++,ch++)
		{
			for(j=1;j<=icol;j++)
			{
				System.out.print(ch+"\t");
			}

			System.out.println();
		}
	}
}

class a16q3
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		int ivalue1=0,ivalue2=0;

		System.out.println("Enter the rows and columns: ");
		ivalue1=sobj.nextInt();
		ivalue2=sobj.nextInt();

		Assignment16 aobj=new Assignment16();

		aobj.Display(ivalue1,ivalue2);
	}
}
