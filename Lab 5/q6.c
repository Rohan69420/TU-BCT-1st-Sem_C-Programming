#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    float x;
    int n, fact=1;
    printf("Enter the value of x and n respectively.");
    scanf("%f%n", &x, &n);
    if (n > 0)
    {
        for (int i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
        printf("The required answer is %.2f", pow(x, n) / fact);
    }
    else if (n == 0){
            fact = 1;
        printf("The required answer is %.2f", pow(x, n) / fact);
    }
    else
        printf("Please inter a positive value for n");
    getch();
    return 0;
}