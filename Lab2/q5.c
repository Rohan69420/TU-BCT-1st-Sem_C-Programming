#include <stdio.h>
#include <conio.h>
void main()
{
    float a; char b; long int c; unsigned int e;
    printf("Enter value of a");
    scanf("%f",&a);
    printf("Enter value of b:");
    scanf(" %c",&b);
    printf("Enter value of c and e");
    scanf("%ld%u",&c,&e);
    printf("value of a: %f\nvalue of b:%c\nvalue of c:%ld\nvalue of e:%u",a,b,c,e);
    getch();
}