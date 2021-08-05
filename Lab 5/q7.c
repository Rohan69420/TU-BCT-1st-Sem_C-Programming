#include <stdio.h>
#include <conio.h>
int main()
{
    int a = 0, b = 1, n, c;
    printf("Enter the number of terms of Fibonacci series that you want.");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        c = a;
        a = b;
        b = b + c;
        printf("\t%d", c);
    }
    getch();
    return 0;
}