#include<stdio.h>

int main()
{
    int standard =0;

    printf("primary school portal\n");

    printf("enter your division:\n");
    scanf("%d", &standard);

    if(standard == 1)
    {
        printf("your exam is at 1PM\n");
    }
     else if(standard == 2)
    {
        printf("your exam is at 2PM\n");
    }
     else if(standard == 3)
    {
        printf("your exam is at 3PM\n");
    }
     else if(standard == 4)
    {
        printf("your exam is at 4PM\n");
    }
    else
    {
        printf("Invalid standard\n");
    }

    return 0;
}