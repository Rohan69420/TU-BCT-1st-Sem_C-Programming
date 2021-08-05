#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    unsigned int n, com, i = 0, sum = 0, temp;
    printf("Enter an unsigned integer");
    scanf("%u", &n);
    com = n;
    while (n > 0)
    {
        sum = sum * 10;
        temp = n % 10;
        sum = (sum + temp);
        n = n / 10;
        i = 1;
    }
    if (sum == com)
        printf("\nIt's a palindrome.");
    else
        printf("\nIt is not an palindrome.");
    getch();
    return 0;
}