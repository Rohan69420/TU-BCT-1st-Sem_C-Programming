#include <stdio.h>
#include <conio.h>
int funct(int[]);
int main()
{
    int array[3][3];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
        {
            printf("\nEnter the %dth row and %dth column element", i + 1, j + 1);
            scanf("%d", &array[i][j]); //writing the array.
        }
    printf("\nThe sum of the diagonal elements is %d", funct(&array[0][0]));
    getch();
    return 0;
}
int funct(int *arr)
{
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
                sum += *((arr + i) + j);
        }
    }
    return (sum);
}