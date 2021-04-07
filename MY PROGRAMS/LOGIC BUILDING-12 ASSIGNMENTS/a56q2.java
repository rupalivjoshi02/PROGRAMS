/* Write a java program which accept string from user and count number of small characters.

Input:	“Marvellous”
Output:	9

*/




import java.util.*;

class StrSmallCaseCount
{
	public int Return(String str)
	{
		int i=0,icnt=0;
		char arr[]=str.toCharArray();

		for(i=0;i<arr.length;i++)
		{
			if((arr[i]>='a') && (arr[i]<='z'))
			{
				icnt++;
			}
		}

		return(icnt);
	}
}

class a56q2
{	
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter the string: ");

		String str1=sobj.nextLine();

		StrSmallCaseCount ssccobj=new StrSmallCaseCount();

		int iret=ssccobj.Return(str1);

		System.out.println("Small case count in the given string is "+iret);              
	}
}
