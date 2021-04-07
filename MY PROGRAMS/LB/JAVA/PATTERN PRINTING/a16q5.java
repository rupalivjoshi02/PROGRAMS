/*	1. Accept number from user and display below pattern..

	Input:	irow:3 icol:4

	Output:	1 2  3  4
		5 6  7  8 
		9 10 11 12	*/




import java.util.*;

class Assignment16
{
	public void Display(int irow,int icol)
	{
		int i=0,j=0,k=0;
	
		if(irow<0)
		{
			irow=-irow;
		}

		if(icol<0)
		{
			icol=-icol;
		}

		k=1;

		for(i=1;i<=irow;i++)
		{
			for(j=1;j<=icol;j++,k++)
			{
				System.out.print(k+"\t");
			}

			System.out.println();
		}
	}
}

class a16q5
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
