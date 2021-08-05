#include <stdio.h>
#include <conio.h>
void main()
{
    float pp,pc,finp;
    printf("\nEnter the price of a pen and price of one copy");
    scanf("\n%f%f",&pp,&pc);
    finp=(float) (2*pp+5*pc)*.9;
    printf("\n The total price after discount is: \tRs%.2f",finp);
    getch();
}