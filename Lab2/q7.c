#include <stdio.h>
#include <conio.h>
void main()
{
    float r1,r2,ser,par;
    printf("Enter the value of two resistances R1 and R2");
    scanf("\n%f%f",&r1,&r2);
    ser= r1+r2;
    par= r1*r2/ser;
    printf("The equivalent resistance in series is: %.2f ohms and in parallel is: %.2f ohms",ser,par);
    getch();
}