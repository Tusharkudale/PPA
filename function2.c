//header file for printf and scanf function
#include<stdio.h>

//Entry point funnction from where execution starts
int main()
{
    int value1=10;
    int value2=11;
    int ans=0;

    ans=value1+value2;
    
    printf("%d",ans);

    return 0;  //return 0 to os which indicates success
}