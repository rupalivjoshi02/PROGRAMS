/*	4.Write a program which accept number from user and return multiplication of all digits.	

	Input:	2395
	Output:	270

	Input:	1018
	Output:	8

	Input:	9440
	Output:	144

	Input:	922432
	Output:	864	*/




import java.util.*;

class Assignment13
{
	public int Return(int ino)
	{
		int idig=0,imult=1;

		if(ino<0)
		{
			ino=-ino;
		}

		if(ino==0)
		{
			return(0);
		}

		while(ino!=0)
		{
			idig=ino%10;

			if(idig!=0)
			{
				imult=imult*idig;
			}
	
			ino=ino/10;	
		}

		return(imult);
	}
}

class a13q4
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		int ivalue=0,iret=0;

		System.out.println("Enter the no.: ");
		ivalue=sobj.nextInt();

		Assignment13 aobj=new Assignment13();

		iret=aobj.Return(ivalue);

		System.out.println("Multiplication of all digits in the given no. is "+iret);
	}
}
