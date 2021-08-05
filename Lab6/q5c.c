#include <stdio.h>
#include <conio.h>
int main()
{
    int n, term = 1;
    printf("Enter the number of terms of the sequence that you want to print");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d", term);
        term += (2 * i - 1);
        if (i != n)
            printf(",");
    }
    getch();
    return 0;
}