/* Write Java program which accept N numbers from user and return difference between summation of even elements and summation of odd elements.

Input:	N:6
	Elements:85 66 3 80 93 88
Output:	53 (234-181)

*/




import java.util.*;

class Difference
{
	public int Return(int arr[])
	{
		int i=0,ieven=0,iodd=0;

		for(i=0;i<arr.length;i++)
		{
			if((arr[i]%2)==0)
			{
				ieven=ieven+arr[i];
			}
			else
			{
				iodd=iodd+arr[i];
			}
		}

		return(ieven-iodd);
	}
}

class a57q1
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

		Difference dobj=new Difference();

		int iret=dobj.Return(arr);

		System.out.println("Difference between even and odd elemnts is "+iret);
	}
}
