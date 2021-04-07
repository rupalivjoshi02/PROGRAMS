/* Write Java program which accept number of rows and number of columns from user and display below pattern.

Input:	irow:3 icol:5
Output:	5 4 3 2 1
	5 4 3 2 1
	5 4 3 2 1

*/




import java.util.*;

class Pattern3
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
			for(j=icol;j>0;j--)
			{
				System.out.print(j+"\t");
			}
			
			System.out.println();
		}
	}
}

class a62q3
{	
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		System.out.println("Enter the rows and columns: ");

		int ivalue1=sobj.nextInt();
		int ivalue2=sobj.nextInt();

		Pattern3 pobj=new Pattern3();

		pobj.Display(ivalue1,ivalue2);
	}
}
