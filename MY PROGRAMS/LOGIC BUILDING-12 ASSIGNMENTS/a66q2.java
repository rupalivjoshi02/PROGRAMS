/* Write Java program which accept two arrays from user and display even contents of each array.

Input:	Arr1:2 9 6 5 2 3
	Arr2:45 6 12 18 23 4

Output:	2 6 2
	6 12 18 4

*/




import java.util.*;

class EvenNoFromArray
{
	public void Display(int arr1[],int arr2[])
	{
		System.out.println("Even elements from 1st array are: ");

		for(int i=0;i<arr1.length;i++)
		{
			if((arr1[i]%2)==0)
			{
				System.out.print(arr1[i]+"\t");
			}
		}

		System.out.println("\nEven elements from 2nd array are: ");

		for(int i=0;i<arr2.length;i++)
		{
			if((arr2[i]%2)==0)
			{
				System.out.print(arr2[i]+"\t");
			}
		}
	}
}

class a66q2
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

		EvenNoFromArray enfaobj=new EvenNoFromArray();

		enfaobj.Display(arr1,arr2);
	}
}
