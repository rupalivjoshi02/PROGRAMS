/* Write java program which accept array from user and reverse each number of that array.

Input:	89 687 56 549 87 9
Output:	98 786 65 945 78 9

*/




import java.util.*;

class ReverseNoFromArray
{
	public void Display(int arr[])
	{
		int idig=0,irev=0;

		for(int i=0;i<arr.length;i++)
		{
			while(arr[i]!=0)
			{
				idig=arr[i]%10;
				irev=(irev*10)+idig;
				arr[i]=arr[i]/10;
			}

			arr[i]=irev;

			irev=0;

			System.out.print(arr[i]+"\t");
		}		
	}
}

class a68q1
{	
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		System.out.println("How many elements? ");

		int isize=sobj.nextInt();
		int arr[]=new int[isize];	

		System.out.println("Enter the elements of array: ");

		for(int i=0;i<isize;i++)
		{
			arr[i]=sobj.nextInt();
		}

		ReverseNoFromArray rnfaobj=new ReverseNoFromArray();

		rnfaobj.Display(arr);
	}
}
