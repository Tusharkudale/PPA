#include<stdio.h>

   void Fun_Value(int No)
    {
        No++;
    }
    void Fun_Address(int *ptr)
    {
        (*ptr)++;
    }
    void Fun_Reference(int &ref)
    {
        ref++;
    }

int main()
{
    int i=10,j=10,k=10;


    Fun_Value(i);
    Fun_Address(&j);
    Fun_Reference(k);

    printf("Call By value:i%d\n",i);
    printf("Call By Address:j%d\n",j);
    printf("Call By Reference:k%d\n",k);

    return 0;
}