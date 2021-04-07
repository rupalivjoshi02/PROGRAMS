/*	Accept 2 no. from user and display that no. of $ on screen.	
	
	Input:	'M' 5
	Output:	M M M M M

	Input:	'A' 0  
	Output:	

	Input:	'$' -4
	Output:	$ $ $ $	

	Input:	'x' 2  
	Output:	x x	*/




import java.util.*;

class Number
{
	public void Display(char ch,int ino)
	{
		int i=0;

		if(ino<0)
		{
			ino=-ino;
		}

		i=1;

		while(i<=ino)
		{
			System.out.print(ch+"\t");

			i++;
		}
	}
}

class DisplayCharacter
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		int ivalue=0;
		char cvalue;

		System.out.println("Enter the no.: ");
		ivalue=sobj.nextInt();

		System.out.println("Enter the character: ");
		cvalue=sobj.next().charAt(0);

		Number nobj=new Number();

		nobj.Display(cvalue,ivalue);
	}
}
