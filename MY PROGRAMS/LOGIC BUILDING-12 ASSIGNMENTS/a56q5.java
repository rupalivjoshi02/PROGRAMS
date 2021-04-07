/* Write a java program which accept string from user and display it in reverse order.

Input:	“MarvellouS”
Output:	SuollevraM

*/




import java.util.*;

class StrReverse
{
	public void Display(String str)
	{
		int i=0,istart=0,iend=0;
		char temp='\0';
		char arr[]=str.toCharArray();

		istart=arr[0];
		iend=arr.length-1;

		for(i=0;i<arr.length;i++)
		{
			temp=arr[istart];
			arr[istart]=arr[iend];
			arr[iend]=temp;
		}

		System.out.println(arr.toCharArray());
	}
}

class Demo5
{	
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter the string: ");

		String str1=sobj.nextLine();

		StrReverse srobj=new StrReverse();
	
		srobj.Display(str1);
	}
}
