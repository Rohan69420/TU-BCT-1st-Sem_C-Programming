#include <stdio.h>
#include <conio.h>
void main()
{
    float l,b,h,volume;
    printf("\nEnter the length, breath and height of the cuboid in meter:");
    scanf("\n%f%f%f",&l,&b,&h);
    volume=(l*b*h);
    printf("\nThe volume of the cuboid is: \t%.2f",volume);
    getch();
}