#include <stdio.h>
#include <conio.h>
unsigned int fact(unsigned int);
int main()
{
    unsigned int x;
    printf("Please enter an unsigned integer");
    scanf("%u", &x);
    printf("The factorial of the entered number is %u", fact(x));

    getch();
    return 0;
}
unsigned int fact(unsigned int a)
{
    //lets use recursion yay;
    if ((a == 1) || (a == 0))
        return (a);
    else
        a = a * fact(a - 1);
}