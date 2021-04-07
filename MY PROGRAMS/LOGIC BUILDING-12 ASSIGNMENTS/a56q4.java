/* Write a java program which accept string from user and check whether it contains vowels in it or not.

Input:	“marvellouS”
Output:	true

Input:	“Demo”
Output:	true

Input:	“xyz”
Output:	false

*/




import java.util.*;

class Vowel
{
	public boolean Boolean(String str)
	{
		int i=0;
		char arr[]=str.toCharArray();

		for(i=0;i<arr.length;i++)
		{
			if((arr[i]=='a') || (arr[i]=='e') || (arr[i]=='i') || (arr[i]=='o') || (arr[i]=='u') || (arr[i]=='A') || (arr[i]=='E') || (arr[i]=='I') || (arr[i]=='O') || (arr[i]=='U'))
			{
				break;
			}
		}

		if(i==arr.length)
		{
			return(false);
		}
		else
		{
			return(true);
		}
	}
}

class a56q4
{	
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter the string: ");

		String str1=sobj.nextLine();

		Vowel vobj=new Vowel();

		boolean bret=false;
	
		bret=vobj.Boolean(str1);

		if(bret==true)
		{
			System.out.println("The given string contains vowels.");
		}    
		else
		{
			System.out.println("The given string does not contains vowels.");
		}       
	}
}
