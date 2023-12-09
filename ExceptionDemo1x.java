import java.util.*;
class ExceptionDemo1x
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the first number:");
        int iNo1 = sobj.nextInt();

        System.out.println("Enter the Second number:");
        int iNo2 = sobj.nextInt();

        int iAns = 0;
        try
        {
            System.out.println("Inside try block");
            iAns =iNo1/iNo2;
        }
        catch(ArithmeticException obj)
        {
            System.out.println("Inside catch block"+obj);
        }
        finally
        {
            System.out.println("Inside the finally block");
        }
        System.out.println("Division is:"+iAns);

    }
}

