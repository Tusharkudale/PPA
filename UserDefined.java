import java.util.*;

class UserDefined
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter your age:");
        int iAge =sobj.nextInt();

        try
        {
        if(iAge<18)
        {
            throw new AgeInvalid("Your age is invalid");
        }
        else
        {
            System.out.println("Login successful");
        }
        }
        catch(AgeInvalid obj)
        {
            System.out.println("Inside catch block");
            
            System.out.println(obj);
        }
    }

}

class AgeInvalid extends Exception
{
    public AgeInvalid(String str)
    {
        super(str);
    }
}