#include <stdio.h>
#include <conio.h>
void main()
{
    float a,b;
    printf("Enter two variables a and b");
    scanf("\n%f%f",&a,&b);
    a=(float) a+b;
    b=(float) a-b;
    a=(float) a-b;
    printf("The value of a is %.2f and value of b is %.2f",a,b);
    getch();
}