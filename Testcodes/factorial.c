#include <stdio.h>
#include <conio.h>
int main()
{
    int n, fact = 1;
    printf("Enter a number to find its factorial\n");
    scanf("%d", &n);
    printf("%d!=",n);
    for (int i = n; i >= 1; i--)
    {
        printf("%d", i);
        if (i != 1)
            printf("*");
        fact = fact * i;
    }
    getch();
    return 0;
}