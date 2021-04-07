/* Write Java program which accept number of rows and number of columns from user and display below pattern.

Input:	irow:4 icol:4
Output:	4 4 4 4
	3 3 3 3
	2 2 2 2
	1 1 1 1

*/




import java.util.*;

class Pattern4
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

		for(i=irow;i>0;i--)
		{
			for(j=0;j<icol;j++)
			{
				System.out.print(i+"\t");
			}
			
			System.out.println();
		}
	}
}

class a61q4
{	
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		System.out.println("Enter the rows and columns: ");

		int ivalue1=sobj.nextInt();
		int ivalue2=sobj.nextInt();

		Pattern4 pobj=new Pattern4();

		pobj.Display(ivalue1,ivalue2);
	}
}
