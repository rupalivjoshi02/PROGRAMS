/*	5. Accept on character from user and check whether that character is vowel (a,e,i,o,u) or not.

	Input:	E
	Output:	true

	Input:	d
	Output:	false		*/




import java.util.*;

class Assignment3
{
	public boolean Boolean(char ch)
	{
		if((ch=='a') || (ch=='e') || (ch=='i') || (ch=='o') || (ch=='u') || (ch=='A') || (ch=='E') || (ch=='I') || (ch=='O') || (ch=='U'))
		{
			return(true);
		}
		else
		{
			return(false);
		}
	}
}

class a3q5
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		char cvalue='\0';
		boolean bret=false;

		System.out.println("Enter the character: ");
		cvalue=sobj.next().charAt(0);

		Assignment3 aobj=new Assignment3();

		bret=aobj.Boolean(cvalue);

		if(bret==true)
		{
			System.out.println("YES,The given character is vowel.");
		}
		else	
		{
			System.out.println("NO,The given character is not vowel.");
		}
	}
}
