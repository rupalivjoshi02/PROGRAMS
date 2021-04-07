/* Write java program which accept N numbers from user and return product of all odd elements.

Input:	N:6
	Elements:15 66 3 70 10 88
Output:	-15 (2 - 17)

Input:	N:6
	Elements:44 66 72 70 10 88
Output:	0

*/




import java.util.*;

class ProductOfOddNo
{
	public int Return(int arr[])
	{
		int imult=1;

		for(int i=0;i<arr.length;i++)
		{
			if((arr[i]%2)!=0)
			{
				imult=imult*arr[i];
			}
		}

		if(imult==1)
		{
			imult=0;
		}

		return(imult);
	}
}

class a59q5
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

		ProductOfOddNo poonobj=new ProductOfOddNo();

		int iret=poonobj.Return(arr);

		System.out.println("Product of odd no. is "+iret);
	}
}
