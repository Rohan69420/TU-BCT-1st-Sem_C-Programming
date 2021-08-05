#include <stdio.h>
#include <conio.h>
int main()
{
    int n, sum = 0;
    printf("\nEnter the number of terms of the series that you want to evaluate");
    scanf("%d", &n);
    printf("s=");
    for (int i = 1; i <= n; i++)
    {
        //print the sequence as string
        printf("%d", 2 * i);
        if (i != n)
            printf("+");
        sum += 2 * i;
    }
    printf("\nThe value of s is:\t%d", sum);
    getch();
    return 0;
}