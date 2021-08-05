#include <stdio.h>
#include <conio.h>
void main()
{
    float a,b,m;
    printf("\nEnter the two end points of a line:\n");
    scanf("\n%f%f",&a,&b);
    m=(float) (a+b)/2;
    printf("The midpoint of the line is: %.2f",m);
    getch();
}