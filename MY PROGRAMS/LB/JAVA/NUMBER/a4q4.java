/*	4. We have to design application for tourist company.Tourist company provides cars on rent.Depends on the running of car they apply 		rent.If running is less than 100 kilometres then they charge 25 rupees per kilometre .And if running is more than 100 kilometres then 		they apply 15 rupees per kilometre after 100 kilometres.We have to accept number of kilometres from user and return the estimated rent.

	Input:	73
	Output:	1825

	Input:	132
	Output:	2980

	Input:	189
	Output:	3835	*/




import java.util.*;

class Assignment4
{
	public int Return(int ikm)
	{
		int irent=0;

		if(ikm<=100)
		{
			irent=ikm*25;
		}
		else
		{
			irent=(ikm*15)+1000;
		}

		return(irent);
	}
}

class a4q4
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		int ivalue=0,iret=0;

		System.out.println("Enter kilometer: ");
		ivalue=sobj.nextInt();

		Assignment4 aobj=new Assignment4();

		iret=aobj.Return(ivalue);

		System.out.println("Estimated rent is "+iret);
	}
}
