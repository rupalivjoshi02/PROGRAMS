/* Write Java program which accept N numbers from user and display all such elements which are multiples of 11.

Input:	N:6
	Elements:85 66 3 55 93 88
Output:	66 55 88

*/




import java.util.*;

class ArrMultiplsOf11
{
	public void Display(int arr[])
	{
		int i=0;
		
		System.out.println("Elements which are multiples of 11 are: ");

		for(i=0;i<arr.length;i++)
		{
			if((arr[i]%11)==0)
			{
				System.out.print(arr[i]+"\t");
			}
		}
	}
}

class a57q5
{	
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("How many elements? ");

		int isize=sobj.nextInt();
		int arr[]=new int[isize];

		System.out.println("Enter the elements: ");

		for(int i=0;i<isize;i++)
		{
			arr[i]=sobj.nextInt();
		}

		ArrMultiplsOf11 amoobj=new ArrMultiplsOf11();

		amoobj.Display(arr);
	}
}
