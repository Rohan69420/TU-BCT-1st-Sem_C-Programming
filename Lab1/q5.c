#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    float volume,r;
    printf("Enter the radius of the sphere in meter:");
    scanf("\n%f",&r);
    volume=(float) 4/3 * 3.1415 * pow(r,3);
    printf("\nThe volume of the sphere is: \t%f m^3",volume);    
    getch();
}