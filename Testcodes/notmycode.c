#include <stdio.h>
int series(int n);
int main()
{
    int n, a, sum = 0;
    printf("Enter the number of terms in the series:\t");
    scanf("%d", &n);
    for (int i=1; i <= n; i++)
    {
        a = series(i);
        if (i != 1)
            printf(" +");
        printf("%d", a);
        sum = sum + a;
    }
    printf("=%d\n", sum);
    return 0;
}
int series(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return series(n - 1) * 10 + 1;
    }
}
