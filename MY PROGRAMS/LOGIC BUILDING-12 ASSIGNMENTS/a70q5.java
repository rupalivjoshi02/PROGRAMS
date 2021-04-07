/* Write a java program which accept matrix from user and return addition of border elements of matrix. */




import java.util.*;
import java.lang.Math;

class AdditionOfBorderElementsOfMatrix
{
	public int Return(int arr[][],int irow,int icol)
	{
		int i=0,j=0,iadd=0;

		if(irow<0)
		{
			irow=-irow;
		}

		if(icol<0)
		{
			icol=-icol;
		}

		for(i=0;i<irow;i++)
		{
			for(j=0;j<icol;j++)
			{
				if((i==0)||(i==irow-1)||(j==icol-1)||(j==0))
				{
					iadd=iadd+arr[i][j];
				}
			}
		}

		return(iadd);
	}

}

class a70q5
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

		

		AdditionOfBorderElementsOfMatrix aobeomobj=new AdditionOfBorderElementsOfMatrix();

		int iret=aobeomobj.Return(arr,ivalue1,ivalue2);

		System.out.println("Addition of border elements of matrix is "+iret);
	}
}
