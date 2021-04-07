/* Write Java program which accept number of rows and number of columns from user and display below pattern.

Input:	irow:4 icol:4
Output:	1 1 1 1
	2 2 2 2 
	3 3 3 3
	4 4 4 4

*/




import java.util.*;

class Pattern5
{
	public void Display(int irow,int icol)
	{
		int i=0,j=0;

		if(irow<0)
		{
			irow=-irow;
		}

		if(icol<0)
		{
			icol=-icol;
		}

		for(i=1;i<=irow;i++)
		{
			for(j=1;j<=icol;j++)
			{
				System.out.print(i+"\t");
			}
			
			System.out.println();
		}
	}
}

class a62q5
{	
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		System.out.println("Enter the rows and columns: ");

		int ivalue1=sobj.nextInt();
		int ivalue2=sobj.nextInt();

		Pattern5 pobj=new Pattern5();

		pobj.Display(ivalue1,ivalue2);
	}
}
