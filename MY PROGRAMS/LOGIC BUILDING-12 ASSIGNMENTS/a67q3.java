/* Write a java program which accept two array from user and copy the contents of that array into another array in reverse order and return new array.

Input:	Arr1:12 57 28 3
	Arr2:99 23 54 58 6 67

Output:	3 28 57 12 67 6 58 54 23 99

*/




import java.util.*;

class CopyReverseArray
{
	public int[] Return(int arr1[],int arr2[])
	{
		int istart=0,iend=0,temp=0,isize3=0;

		isize3=arr1.length+arr2.length;

		int arr3[]=new int[isize3];

		iend=arr1.length-1;

		while(istart<iend)
		{
			temp=arr1[istart];
			arr1[istart]=arr1[iend];
			arr1[iend]=temp;

			istart++;
			iend--;
		}

		istart=0;
		temp=0;

		iend=arr2.length-1;

		while(istart<iend)
		{
			temp=arr2[istart];
			arr2[istart]=arr2[iend];
			arr2[iend]=temp;

			istart++;
			iend--;
		}

		System.out.println("3rd array after copying the 2 reversed array in it : ");

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
		}

		return(arr3);
	}
}

class a67q3
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

		CopyReverseArray craobj=new CopyReverseArray();

		int isize3=isize1+isize2;	
		int arr3[]=new int[isize3];

		arr3=craobj.Return(arr1,arr2);

		for(int i=0;i<isize3;i++)
		{
			System.out.print(arr3[i]+"\t");
		}
	}
}


