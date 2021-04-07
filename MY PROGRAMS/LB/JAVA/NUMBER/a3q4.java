/*	4. Accept one character from user and convert case of that character.

	Input:	'a'
	Output:	A

	Input:	'D'
	Output:	d		*/




import java.util.*;

class Assignment3
{
	public void Display(char ch)
	{
		if((ch>='a') && (ch<='z'))
		{
			System.out.println((char)((int)ch-32));
		}

		if((ch>='A') && (ch<='Z'))
		{
			System.out.println((char)((int)ch+32));
		}
	}
}

class a3q4
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		char cvalue='\0';

		System.out.println("Enter the character: ");
		cvalue=sobj.next().charAt(0);

		Assignment3 aobj=new Assignment3();

		aobj.Display(cvalue);
	}
}
