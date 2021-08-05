#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    float x,y,v;
    printf("\nEnter the value of x and y respectively:");
    scanf("\n%f%f",&x,&y);
    v=pow(x,3)+pow(y,2)-(float)100/x;
    printf("The value of the expression is: \t%.2f",v);
    getch();
}