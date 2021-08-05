#include <stdio.h>
#include <conio.h>
void main()
{
    int a,b,c,d;
    float mean;
    printf("\nEnter four integers:");
    scanf("\n%d%d%d%d",&a,&b,&c,&d);
    mean=(float)(a+b+c+d)/4;
    printf("The mean of the given integers is: \t%.2f",mean);
    getch();
}