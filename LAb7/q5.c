#include <stdio.h>
#include <conio.h>
//was going to include the previous program files but realised it might not work since main would be defined
//for like 4 times which is totally UNACCEPTABLE!
float add(int, float);
void sumOfDigits(int);
unsigned int fact(unsigned int);
void check_prime(int);
int main()
{
    unsigned int x;
    int n;
        float b;
    printf("\nHere are the program's that are available:");
    printf("\nPress 1 to find sum of an integer and float.");
    printf("\nPress 2 to find sum of digits of an integer");
    printf("\nPress 3 to calculate the factorial of a integer.");
    printf("\nPress 4 to check if the number is prime.");
    scanf("%d", &x);
    switch (x)
    {
    case 1:
        
        printf("Enter two values, later one being float ");
        scanf("%d%f", &n, &b);
        printf("The sum is %f", add(n, b));
        break;

    case 2:
        
        printf("Enter an integer");
        scanf("%d", &n);
        sumOfDigits(n);
        break;
    case 3:
        
        printf("Please enter an unsigned integer");
        scanf("%u", &x);
        printf("The factorial of the entered number is %u", fact(x));
        break;
    case 4:
        
        printf("Enter a number to check if it is a prime");
        scanf("%d", &x);
        check_prime(x);
        break;
    }
    getch();
    return 0;
}
float add(int a, float b)
{
    return (a + b);
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
unsigned int fact(unsigned int a)
{
    //lets use recursion yay;
    if ((a == 1) || (a == 0))
        return (a);
    else
        a = a * fact(a - 1);
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