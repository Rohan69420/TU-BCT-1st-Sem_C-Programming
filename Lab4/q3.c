#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    float a, b, c, area;
    printf("Enter the three sides of triangle");
    scanf("%f%f%f", &a, &b, &c);
    if ((a + b) > c && (b + c) > a && (a + c) > b)
    {
        printf("it's working");
        float s = (float)(a + b + c) / 2;
        float asq = s * (s - a) * (s - b) * (s - c);
        area = pow(asq,.5);
        printf("The area of the triangle is:\t %.2f m^2", area);
    }
    else
        printf("It is not a triangle.");
    getch();
}