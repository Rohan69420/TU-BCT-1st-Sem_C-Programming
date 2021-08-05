#include <stdio.h>
#include <conio.h>
int main()
{
    int n, prod = 1, sum = 0;
    printf("Enter an integer");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        for (int i = 1; i <= n; i++)
        {
            prod = prod * i;
        }
        printf("The product is %d", prod);
    }
    else
    {
        for (int i = 0; i <= n; i++)
        {
            sum = sum + i;
        }
        printf("The sum is %d", sum);
    }
    getch();
    return 0;
}