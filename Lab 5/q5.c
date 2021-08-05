#include <stdio.h>
#include <conio.h>
int main()
{
    int n, fact = 1;
    printf("Enter an integer");
    scanf("%d", &n);
    if ((n < 0) || n == 0)
        printf("Please enter a positive integer");
    else
    {
        for (int i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
        printf("The factorial is %d!=%d", n, fact);
    }
    getch();
    return 0;
}