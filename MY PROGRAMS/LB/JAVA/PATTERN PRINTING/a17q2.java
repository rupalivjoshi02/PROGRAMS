/*	1. Accept number from user and display below pattern..

	Input:	irow:4 icol:5

	Output:	2 4 6 8 10
		1 3 5 7 9 
		2 4 6 8 10
		1 3 5 7 9	*/




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
					System.out.print(2*j+"\t");
				}
				else
				{
					System.out.print((2*j)-1+"\t");
				}
			}

			System.out.println();
		}
	}
}

class a17q2
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
