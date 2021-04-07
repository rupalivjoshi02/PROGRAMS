/* Write a Java program which accept string from user and count number of capital characters.

Input:	“Marvellous Multi OS”
Output:	4

*/




import java.util.*;

class StrCapitalCount
{
	public int Return(String str)
	{
		int i=0,icnt=0;
		char arr[]=str.toCharArray();

		for(i=0;i<arr.length;i++)
		{
			if((arr[i]>='A') && (arr[i]<='Z'))
			{
				icnt++;
			}
		}

		return(icnt);
	}
}

class a56q1
{	
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter the string: ");

		String str1=sobj.nextLine();

		StrCapitalCount sccobj=new StrCapitalCount();

		int iret=sccobj.Return(str1);

		System.out.println("Capital count in the given string is "+iret);              
	}
}
