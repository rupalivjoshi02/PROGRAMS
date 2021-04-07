/* Write a java program which accept matrix from user and swap the contents of each consecutive rows. */




import java.util.*;

class MatrixColumn
{
	public void Display(int arr[][],int irow,int icol)
	{
		int i=0,j=0,temp=0;

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
			for(j=0;j<(icol-1);j=j+2)
			{
				temp=arr[i][j];
				arr[i][j]=arr[i][j+1];
				arr[i][j+1]=temp;
			}
		}

		System.out.println("Updated matrix after swapping each consecutive columns: ");

		for(i=0;i<irow;i++)
		{
			for(j=0;j<icol;j++)
			{
				System.out.print(arr[i][j]+"\t");
			}

			System.out.println();
		}
	}
}

class a70q2
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

		

		MatrixColumn mcobj=new MatrixColumn();

		mcobj.Display(arr,ivalue1,ivalue2);
	}
}
