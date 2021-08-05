#include <stdio.h>
#include <conio.h>
void main()
{
    float principal, time, rate,si;
    printf("Enter principal in rupees, time in years and rate in percent respectively:");
    scanf("\n%f%f%f",&principal,&rate,&time);
    si= (float) (principal*time*rate)/100;
    printf("\n The simple interest is:\t Rs%f",si);
    getch();
}