#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    float r,u,x,v,y,p,q;
    printf("\nEnter the value of u,x,v,y,p,q");
    scanf("\n%f%f%f%f%f%f",&u,&x,&v,&y,&p,&q);
     r=(float) pow((u/x+v/y),5)/(pow(pow(p,2)/3*pow(u,2.5)-(q/(2*v)),3.5));
    printf("The value of r is: %f",r);
    getch();
}