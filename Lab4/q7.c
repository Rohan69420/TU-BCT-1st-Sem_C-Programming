#include <stdio.h>
#include <conio.h>
void main()
{
    int x;
    printf("Enter a number");
    scanf("%d", &x);
    if (x <= 0)
    {
        printf("0");
    }
    else if (0 <= x <= 10)
        printf("\n%d", x * (x - 10) * (x - 15) * (x - 20));
    else if (10 < x <= 15)
        printf("\n%d", (x - 10) * (x - 20) * (x - 30));
    else if (15 < x <= 20)
        printf("\n%d", (x - 15) * (x - 20) * (x - 30));
    else if (20 < x <= 30)
        printf("\n%d", (x - 20) * (x - 30) * (x - 40));
    else
        printf("0");
    getch();
}