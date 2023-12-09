class Array1
{
    public static void main(String arg[])
    {
        //syntax-1
        int Arr1[]={11,21,51,101}; 

        //syntax-2
        int Arr2[]=new int[5];
        Arr2[0]=11;
        Arr2[1]=21;
        Arr2[2]=51;
        Arr2[3]=101;
        Arr2[4]=202;
        System.out.println("Length of Array is :"+Arr1.length);
        System.out.println("Length of Array is :"+Arr2.length);

        int iCnt =0;
        
        for(iCnt=0; iCnt<Arr1.length;iCnt++)
        {
            System.out.println(Arr1[iCnt]);
        }

    }
}