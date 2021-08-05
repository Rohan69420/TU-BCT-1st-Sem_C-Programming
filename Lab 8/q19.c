#include <stdio.h>
#include <conio.h>
int main()
{
    int m, n, array[10][10], newarr[10], sum;
    printf("\nEnter the size of the array as mxn");
    scanf("%d%d", &m, &n);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            printf("\n Enter %dth row and %dth column element",i+1,j+1);
            scanf("%d", &array[i][j]); //writing the array
        }
    for (int i = 0; i < m; i++)
    {
        sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += array[i][j];
        }
        newarr[i] = sum;
    }
    for (int i = 0; i < m; i++)
    {
        printf("\n%d", newarr[i]);
    }
    getch();
    return 0;
}