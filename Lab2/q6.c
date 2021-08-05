#include <stdio.h>
#include <conio.h>
void main()
{
    float c,f;
    printf("Enter temperature in degree centigrate");
    scanf("\n%f",&c);
    f=1.8*c+(float)32;
    printf("The temperature in degree fahrenheit is: %.3f",f);
    getch();
}