#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int num, base = 1, rem, sum = 0;
    system("cls");

    printf("Decimal number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        rem = num % 2;
        sum = sum + rem * base;
        num = num / 2;
        base = base * 10;
    }
    printf("%d", sum);
    getch();
    return 0;
}