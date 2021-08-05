#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    int i=1,test, n, x, present_digit, sum = 0;
    printf("\n Enter an integer number to check if it is an Armstrong number", n);
    scanf("%d", n);
    test=n;
    while (test > 0)
    {
        test = test / 10;
        i++;
    }
    x = n;
    printf("\nThis is the value of I %d",i);
    while (n > 0) 
    {
        present_digit = n % 10;
        sum = sum + pow(present_digit, i);
        n = n / 10;
    }
    if (x == sum)
    {
        printf("\nIt's an armstrong number.");
    }
    else
    {
        printf("\nIt is not an armstrong number.");
    }
    getch();
}