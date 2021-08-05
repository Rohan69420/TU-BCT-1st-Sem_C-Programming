#include <stdio.h>
#include <conio.h>
int main()
{
    unsigned int n, sum = 0;
    printf("Enter a positive integer,");
    scanf("%u", &n);
    for (unsigned int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            sum = sum + i;
    }
    printf("The sum is %u", sum);
    getch();
    return 0;
}