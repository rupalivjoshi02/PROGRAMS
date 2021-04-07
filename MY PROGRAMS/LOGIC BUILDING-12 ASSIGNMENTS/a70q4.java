/* Write a java program which accept matrix from user and trace and  normal of given matrix.

Here trace of the matrix is the sum of the elements of the main diagonal i.e the diagonal from the upper left to the lower right of a matrix. 

Normal of the matrix is the square root of the sum of all the elements. */




import java.util.*;
import java.lang.Math;

class TraceAndNormalOfMatrix
{
	public void Display(int arr[][],int irow,int icol)
	{
		int i=0,j=0,iadd=0,itrace=0,isum=0;
		double inorm=0.0;

		if(irow<0)
		{
			irow=-irow;
		}

		if(icol<0)
		{
			icol=-icol;
		}

		if(irow!=icol)
		{
			return;
		}

		for(i=0;i<irow;i++)
		{
			for(j=0;j<icol;j++)
			{
				if(i==j)
				{
					itrace=itrace+arr[i][j];
				}
				else
				{
					iadd=iadd+arr[i][j];
				}
			}
		}

		System.out.println("Trace of the matrix is "+itrace);

		isum=itrace+iadd;	
		inorm=Math.sqrt(isum);

		System.out.println("Normal of the matrix is "+inorm);
	}

}

class a70q4
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		System.out.println("Enter the rows and columns: ");

		int ivalue1=sobj.nextInt();
		int ivalue2=sobj.nextInt();
		int arr[][]=new int[ivalue1][ivalue2];

		System.out.println("Enter the elemnts: ");

		for(int i=0;i<ivalue1;i++)
		{
			for(int j=0;j<ivalue2;j++)
			{
				arr[i][j]=sobj.nextInt();
			}
		}

		System.out.println("Matrix: ");

		for(int i=0;i<ivalue1;i++)
		{
			for(int j=0;j<ivalue2;j++)
			{
				System.out.print(arr[i][j]+"\t");
			}

			System.out.println();
		}

		

		TraceAndNormalOfMatrix tanomobj=new TraceAndNormalOfMatrix();

		tanomobj.Display(arr,ivalue1,ivalue2);
	}
}
