#include <stdio.h>
#include <conio.h>
void check_prime(int);
int main()
{
    int x;
    printf("Enter a number to check if it is a prime");
    scanf("%d", &x);
    if (x<=0)
    printf("Please enter a positive number");
    else if (x==1)
    printf("Please enter a number greater than 1");
    else
    check_prime(x);
    getch();
    return 0;
}
void check_prime(int n)
{
    int prime = 0;
 
        for (int i = 2; i < n; i++) //most mistaken point, always loop until one step lower than the given number.
    {
        if (n % i == 0)
            prime = 0;
        else
            prime = 1;
    }
    if (prime == 1)
        printf("It is a prime.");
    else
        printf("It is not a prime.");
}