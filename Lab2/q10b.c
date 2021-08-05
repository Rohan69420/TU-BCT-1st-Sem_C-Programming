#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    float a,b,x,y,c,po,p,q,f;
    printf("\nEnter the value of a,b,x,y,p,q");
    scanf("\n%f%f%f%f%f%f",&a,&b,&x,&y,&p,&q);
    po= (2*x+y)/(p-q);
    f=pow((a+b),po)+c-(float)100;
    printf("The value of f is: %f",f);
    getch();
}