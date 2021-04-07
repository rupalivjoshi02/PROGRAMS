/* Write Java program which accept number of rows and number of columns from user and display below pattern.

Input:	irow:3 icol:4
Output:	1 2  3  4
	5 6  7  8
	9 10 11 12
*/




import java.util.*;

class Pattern5
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

		for(i=irow;i>0;i--)
		{
			for(j=0;j<icol;j++,k++)
			{
				System.out.print(k+"\t");
			}
			
			System.out.println();
		}
	}
}

class a61q5
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
