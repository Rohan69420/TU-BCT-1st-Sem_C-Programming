#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    float S,x,y;
    printf("\nEnter the value of x and y:");
    scanf("\n%f%f",&x,&y);
    S=pow(x,5)+.2*x*y+pow(y,7);
    printf("The value of S is : %.2f",S);
    getch();
}