/* Write Java program which accept two arrays from user and form new array which is combination of contents of first and second array.

Input:	Arr1:12 57 28 3
	Arr2:99 23 54 58 6 67

Output:	12 57 28 3 99 23 54 58 6 67

*/




import java.util.*;

class Combine2Array
{
	public void Display(int arr1[],int arr2[])
	{
		int isize3=arr1.length+arr2.length;

		int arr3[]=new int[isize3];

		System.out.println("3rd array after combining 2 array: ");

		for(int i=0;i<isize3;i++)
		{
			if(i<arr1.length)
			{
				arr3[i]=arr1[i];
			}
			else
			{
				arr3[i]=arr2[i-arr1.length];
			}

		System.out.print(arr3[i]+"\t");	
		}
	}
}

class a66q4
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

		Combine2Array caobj=new Combine2Array();

		caobj.Display(arr1,arr2);
	}
}
