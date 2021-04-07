/* Write Java program which accept two arrays from user and display contents of each array.

Input:	Arr1:2 9 7 5 2 3
	Arr2:9 3 5 5

Output:	2 9 7 5 2 3
	9 3 5 5

*/




import java.util.*;

class Array
{
	public void Display(int arr1[],int arr2[])
	{
		System.out.println("Elements from 1st array are: ");

		for(int i=0;i<arr1.length;i++)
		{
			System.out.print(arr1[i]+"\t");
		}

		System.out.println("\nElements from 2nd array are: ");

		for(int i=0;i<arr2.length;i++)
		{
			System.out.print(arr2[i]+"\t");
		}
	}
}

class a66q1
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

		Array aobj=new Array();

		aobj.Display(arr1,arr2);
	}
}
