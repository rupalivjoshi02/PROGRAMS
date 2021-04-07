/*	1. Accept number from user and display below pattern..

	Input:	irow:5 icol:5

	Output:	 1  2  3  4  5
		-1 -2 -3 -4 -5 
		 1  2  3  4  5
		-1 -2 -3 -4 -5
		 1  2  3  4  5	*/




import java.util.*;

class Assignment17
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
				if((i%2)!=0)
				{
					System.out.print(" "+j+"\t");
				}
				else
				{
					System.out.print(-j+"\t");
				}
			}

			System.out.println();
		}
	}
}

class a17q4
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		int ivalue1=0,ivalue2=0;

		System.out.println("Enter the rows and columns: ");
		ivalue1=sobj.nextInt();
		ivalue2=sobj.nextInt();

		Assignment17 aobj=new Assignment17();

		aobj.Display(ivalue1,ivalue2);
	}
}
