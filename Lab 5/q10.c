#include <stdio.h>
#include <conio.h>
int main()
{
    int n, prod;
    printf("Enter a number");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        prod = i * n;
        printf("\n%d*%d=%d", i, n, prod);
    }
    getch();
    return 0;
}