#include<stdio.h>

int main()
{

    int Arr[4]={11,21,51,101};

    printf("Base address of array:%d\n",Arr);

    printf("Base address pf first element of Array:%d\n",&(Arr[0]));

    printf("Address of second element is: %d\n",&(Arr[1]));
    printf("first element is:%d\n",Arr[0]);

    printf("Size of the whole Array:%d\n",sizeof(Arr));

    printf("Size of the second element of Array :%d\n",sizeof(Arr[1]));

    return 0;
}