#include<stdio.h>

int main()
{
    int standard =0;

    printf("primary school portal\n");

    printf("enter your division:\n");
    scanf("%d", &standard);

    switch(standard)
    {
        case 1:
        printf("your exam is at 1PM\n");
        break;
         case 2:
        printf("your exam is at 2PM\n");
        break;
         case 3:
        printf("your exam is at 3PM\n");
        break;
         case 4:
        printf("your exam is at 4PM\n");
        break;
        default: 
        printf("invalid standard\n");
        break;       
    }
       return 0;
}