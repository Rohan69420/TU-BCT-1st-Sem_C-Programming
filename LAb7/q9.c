#include <stdio.h>
#include <conio.h>
int recur(int);
int main()
{
    int n, sum = 0;
    printf("Enter the number of terms of the series you want to find out.");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            sum -= recur(i);
        else
            sum += recur(i);
    }
    printf("The sum is %d", sum);
    getch();
    return 0;
}
int recur(int a)
{
    return (a * a);
}