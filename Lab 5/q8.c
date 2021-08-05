#include <stdio.h>
#include <conio.h>
int main()
{
    int n, sum = 0, temp;
    printf("Enter a number");
    scanf("%d", &n);
    while (n > 0)
    {
        temp = n % 10;
        n = n / 10;
        sum = sum + temp;
    }
    printf("Sum is %d", sum);
    getch();
    return 0;
}