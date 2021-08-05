#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    printf("Enter the number of terms of the sequence you want to view");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {

        printf("1");
        if (i != 1)
        {
            printf("/%d", 2 * i - 1);
        }
        if (i != n)
            printf(",");
    }
    getch();
    return 0;
}