/* Write a java program which accept two arrays from user and return difference between summation of arrays.

Input:	Arr1:2 9 7 5 2 3
	Arr2:9 3 5 5

Output:	6 (28-22)

*/




import java.util.*;

class Difference
{
	public int Return(int arr1[],int arr2[])
	{
		int isum1=0,isum2=0;

		for(int i=0;i<arr1.length;i++)
		{
			isum1=isum1+arr1[i];
		}

		for(int i=0;i<arr2.length;i++)
		{
			isum2=isum2+arr2[i];
		}

		return(isum1-isum2);
	}
}

class a67q1
{	
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		System.out.println("How many elements for 1st array? ");

		int isize1=sobj.nextInt();
		int arr1[]=new int[isize1];	

		System.out.println("How many elements for 2nd array? ");

		int isize2=sobj.nextInt();
		int arr2[]=new int[isize2];	

		System.out.println("Enter the elements in 1st array: ");

		for(int i=0;i<isize1;i++)
		{
			arr1[i]=sobj.nextInt();
		}

		System.out.println("Enter the elements in 2nd array: ");

		for(int i=0;i<isize2;i++)
		{
			arr2[i]=sobj.nextInt();
		}

		Difference dobj=new Difference();

		int iret=dobj.Return(arr1,arr2);

		System.out.println("The difference between summation of array is "+iret);
	}
}
