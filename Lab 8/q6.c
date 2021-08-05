#include <stdio.h>
#include <conio.h>
void funct(int[], int);
int main()
{
    int arr[100], n;
    printf("\nEnter the number of terms of the array you want to enter (<100).");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the %dth element", i + 1);
        scanf("%d", &arr[i]); //array writing process
    }
    funct(&arr[0], n);
    printf("\n");
    for (int u = 0; u < n; u++)
    {
        printf("\t%d", arr[u]);
    }
    getch();
    return 0;
}
void funct(int *x, int n)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int y = i + 1; y < n; y++)
        {
            if (*(x + i) > *(x + y))
            {
                temp = *(x + i);
                *(x + i) = *(x + y);
                *(x + y) = temp;
            }
        }
    }
}