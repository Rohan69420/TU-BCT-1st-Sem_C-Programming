#include <stdio.h>
#include <conio.h>
void sumOfDigits(int);
int main()
{
    int n;
    printf("Enter an integer");
    scanf("%d", &n);
    sumOfDigits(n);
    getch();
    return 0;
}
void sumOfDigits(int x)
{
    int sum = 0;
    while (x > 0)
    {
        sum += x % 10;
        x /= 10;
    }
    printf("The sum of the individual digits is %d", sum);
}