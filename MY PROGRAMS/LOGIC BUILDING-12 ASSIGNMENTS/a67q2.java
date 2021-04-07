/* Write a java program which accept two two arrays from user and display minimum element of each array.

Input:	Arr1:2 9 7 5 2 3
	Arr2:9 3 5 5

Output:	2 3

*/




import java.util.*;

class MinimumNo
{
	public void Display(int arr1[],int arr2[])
	{
		int imin1=0,imin2=0;

		imin1=arr1[0];
		imin2=arr2[0];

		for(int i=0;i<arr1.length;i++)
		{
			if(arr1[i]<imin1)
			{
				imin1=arr1[i];
			}
		}

		System.out.println("Minimum no. from 1st array is "+imin1);

		for(int i=0;i<arr2.length;i++)
		{
			if(arr2[i]<imin2)
			{
				imin2=arr2[i];
			}
		}

		System.out.println("Minimum no. from 2nd array is "+imin2);
	}
}

class a67q2
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

		MinimumNo mnobj=new MinimumNo();

		mnobj.Display(arr1,arr2);
	}
}
