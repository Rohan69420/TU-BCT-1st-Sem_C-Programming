#include <stdio.h>
#include <conio.h>
int main()
{
    unsigned int n;
    printf("Enter a positive integer.");
    scanf("%u", &n);
    for (unsigned int i = 1; i <= n; i++)
        printf("\n%u", i);
    for (unsigned int i = n; i >= 1; i--)
        printf("\n%u", i);
    getch();
    return 0;
}