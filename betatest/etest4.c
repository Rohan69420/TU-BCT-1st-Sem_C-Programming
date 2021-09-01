#include <stdio.h>
int main()
{
    int array[10][10];
    int n, sum = 0, a, b;
    printf("\nEnter the dimension of the array NxN");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the %dth row and %dth column element", i + 1, j + 1);
            scanf("%d", &array[i][j]);
            if (i == j)
                sum += array[i][j];
        }
    }
    a = 0, b = n-1;
    while (a <n && b >= 0)
    {
        sum += array[a][b];
        a++;
        b--;
    }
    printf("\nThe sum is %d", sum);
    return 0;
}
