import java.util.*;
class ExceptionDemo1x
{
    public static void main(String arg[])
    {
        Demo dobj = new Demo();
        try{

            System.out.println("Inside try");
        dobj.Division();
        }
        catch(ArithmeticException obj)
        {
            System.out.println("Inside catch block");
        }

        finally
        {
            System.out.println("Inside finally");
        }
    }
}
class Demo{
        public void Division()throws ArithmeticException
        {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the first number:");
        int iNo1 = sobj.nextInt();

        System.out.println("Enter the Second number:");
        int iNo2 = sobj.nextInt();

        int iAns = 0;
        iAns =iNo1/iNo2;
        System.out.println("Division is:"+iAns);
}
}
