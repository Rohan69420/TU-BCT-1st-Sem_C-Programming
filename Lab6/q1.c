#include <stdio.h>
#include <conio.h>
int main()
{
    int m, n;
    printf("Enter the value of m and n");
    scanf("%d%d", &m, &n);
        printf("X\t");
    for (int i = 1; i <= n; i++)
        printf("%d\t", i);
    for (int x = 1; x <= m; x++)
    {
        printf("\n%d\t", x);
        for (int j = 1; j <= n; j++)
        {
            printf("%d\t", x * j);
        }
    }
    getch();
    return 0;
}