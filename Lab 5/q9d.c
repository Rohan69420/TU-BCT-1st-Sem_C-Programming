#include <stdio.h>
#include <conio.h>
int main()
{
    int n, m, p, q;
    printf("Enter two number to check to see if they are twin prime");
    scanf("%d%d", &n, &m);
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            p = 1;
        if (n % i != 0)
            p = 0;
    }
    for (int i = 2; i < m; i++)
    {
        if (n % i == 0)
            q = 1;
        if (n % i != 0)
            q = 0;
    }
    if ((p == 1) || (q == 1))
        printf("It isn't a prime");

    if ((p == 0) && (q == 0))
    {
        if (((n - m) == 2) || ((m - n) == 2))
            printf("It is a twin prime.");
        else
            printf("It isn't a prime");
    }
    else
    {
        printf("It isn't a prime");
    }
    getch();

    return 0;
}