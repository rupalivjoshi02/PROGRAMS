/* Write Java program which accept N numbers from user and display all such elements which are divisible by 5.

Input:	N:6
	Elements:85 66 3 80 93 88
Output:	85 80

*/




import java.util.*;

class ArrDivisibleBy5
{
	public void Display(int arr[])
	{
		int i=0;
		
		System.out.println("Elements which are divisible by 5 are: ");

		for(i=0;i<arr.length;i++)
		{
			if((arr[i]%5)==0)
			{
				System.out.print(arr[i]+"\t");
			}
		}
	}
}

class a57q2
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

		ArrDivisibleBy5 adbobj=new ArrDivisibleBy5();

		adbobj.Display(arr);
	}
}
