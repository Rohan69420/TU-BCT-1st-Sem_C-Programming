#include <stdio.h>
#include <conio.h>
int main()
{
    int n, p;
    printf("Enter a number to check to see if it is prime");
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            p = 1;
        if (n % i != 0)
            p = 0;
    }
    if (p == 1)
        printf("It isn't a prime");
    else
        printf("It is a prime.")
            getch();
    return 0;
}