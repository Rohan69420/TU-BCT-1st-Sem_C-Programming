#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    printf("Enter the number of terms that you want to display");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
        if (i != n)
            printf(",");
    }
    getch();
    return 0;
}