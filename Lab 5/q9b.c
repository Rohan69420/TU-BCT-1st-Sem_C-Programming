#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    unsigned int n, po = 0, rem, sum = 0, cst;
    printf("Enter a positive number");
    scanf("%u", &n);
    cst = n;
    while (n > 0)
    {
        po++;
        n /= 10;
    }
    n = cst;
    while (n > 0)
    {
        rem = n % 10;
        sum = sum + pow(rem, po);
        n = n / 10;
    }
    if (cst == sum)
    {
        printf("\nIt is an armstrong");
    }
    else
    {
        printf("\nIt is not an armstrong.");
    }
    getch();
    return 0;
}