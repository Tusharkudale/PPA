
class ClassDemo
{
    public static void main(String arg[])
    {
        System.out.println("Inisde main");

        Marvellous mobj1 =new Marvellous();
        Marvellous mobj2 =new Marvellous(11,21);
        
        System.out.println(mobj2.i);
        System.out.println(mobj2.j);

        mobj2.fun();
    }

}
class Marvellous
{
    public int i;
    public int j;

    public Marvellous()
    {
        System.out.println("inside default constructor");
        this.i=0;
        this.j=0;
    }

    public Marvellous(int a,int b)
    {
        System.out.println("inside parameterised constructor");
        this.i=a;
        this.j=b;
    }

    public void fun()
    {
       
        System.out.println("inside fun method");
    }
}
