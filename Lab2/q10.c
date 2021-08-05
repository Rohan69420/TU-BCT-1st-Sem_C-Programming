#include <stdio.h>
#include <conio.h>
void main()
{
    int A,B;
    float r;
    printf("\nEnter any two integers:");
    scanf("\n%d%d",&A,&B);
    r=(float)A/B;
    printf("The value of r is: %.2f",r);
    getch();
}