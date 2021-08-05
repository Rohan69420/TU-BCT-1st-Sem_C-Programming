#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    printf("Enter the number of terms you want to print");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d", 2 * i);
        if (i != n)
            printf(",");
    }
    getch();
    return 0;
}