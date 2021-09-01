#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    int n = 0, a = 1, b, m;
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        b = n;
        n = a;
        a = n + b;
        printf("\t%d", b);
    }
    getch();
    return 0;
}