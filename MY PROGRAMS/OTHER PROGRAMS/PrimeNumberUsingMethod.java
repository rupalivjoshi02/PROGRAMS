import java.util.*;

class PrimeNumberUsingMethod
{
    public void Display(int ino)
    {
        int i=0,flag=0;

        if(ino<0)
        {
            ino=-ino;
        }

        if(ino<=1)
        {
            System.out.println(ino+" is not prime no.");
        }
        else
        {
            for(i=2;i<=(ino/2);i++)
            {
                if((ino%i)==0)
                {
                    System.out.println(ino+" is not prime no.");   
                }

                flag=1;

                break;
            }

            if(flag==0)
            {
                System.out.println(ino+" is prime no.");
            }
        }
    }

    public static void main(String arg[])
    {
        Display(1);
        Display(3);
        Display(17);
        Display(20);
    }
}