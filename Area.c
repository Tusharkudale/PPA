#include<stdio.h>

int main()
{
    float Radius = 0.0f;
    const float PI = 3.14f;
    float Area = 0.0f;

    printf("Enter the size of radius:\n");
    scanf("%f",&Radius);

    Area= PI * Radius * Radius;

    printf("AREA OF CIRLE IS:%f\n",Area);

    return 0;
}