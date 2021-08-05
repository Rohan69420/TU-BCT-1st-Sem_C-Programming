#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    printf("Enter the number of terms that we need to display");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d", (((i * i) + ((i + 1) * (i + 1)))));
        printf("/%d", (i + 1));
        if (i != n)
            printf(",");
    }
    getch();
    return 0;
}