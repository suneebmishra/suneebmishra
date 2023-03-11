#include<stdio.h>

int main()
{
    float radius;
    float pi=3.14, area, circumference;

    printf(" Enter the Radius of Circle: ");
    scanf("%f", &radius);

    area = pi * radius * radius;
    printf(" Area of a Circle : %f\n ", area);

    circumference = 2 * pi * radius;
    printf(" Circumference of a Circle is : %f\n ", circumference);

    return 0;
}