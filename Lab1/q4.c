#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    float area, circumference, r;
    printf("Enter input the radius of the circle in meter:");
    scanf("\n%f",&r);
    area=3.1415*pow(r,2);
    circumference=2*3.1415*r;
    printf("\nThe area of the circle is: %.2f m^2",area);
    printf("\nThe circumference of the circle is: %.2f m",circumference);
    getch();
}