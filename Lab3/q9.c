#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b;
    printf("Enter an integer number");
    scanf("%d", &a);
    printf("The read and stored value of a is =%d", a);
    printf("Enter another integer nunmber:");
    scanf("%3d,&b");
    printf("The read and stored value of b is =%d",b);
    getch();
}